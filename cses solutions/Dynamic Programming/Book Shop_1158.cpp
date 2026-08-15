#include <bits/stdc++.h> 
using namespace std;

#define FOR(i,l,r); for(int i=l;i<=r;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int dp[1005][100005], value[1003], weigth[1003];

signed main () {
	fast;
	 
//	freopen("BOOKSHOP.inp", "r", stdin);
//	freopen("BOOKSHOP.out", "w", stdout);
	
	int n; cin >> n;
	int x; cin >> x;
	FOR(i,1,n) cin >> weigth[i];
	FOR(i,1,n) cin >> value[i];
	
	FOR(i,1,n)
	{
		FOR(j,1,x) {
			dp[i][j] = dp[i-1][j];
			if (j >= weigth[i]) dp[i][j] = max(dp[i][j], dp[i-1][j - weigth[i]] + value[i]);
		}
	}
	cout << dp[n][x];
} 