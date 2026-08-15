#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define FOR(i,l,r); for(int i=l;i<=r;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const int mod = 1e9+7;
int main () 
{	
	fast;
//	freopen("ARRAYDESCRIPTION.INP", "r", stdin);
//	freopen("ARRAYDESCRIPTION.OUT", "w", stdout);

	int n, m; cin >> n >> m;
	vector<int> x(n);
	FOR(i,0,n-1) cin >> x[i];
	
	vector<vector<ll>> dp(n,vector<ll>(m+1,0));
	if (x[0] != 0) dp[0][x[0]] = 1;
	else for (int i = 1; i <= m; i++) dp[0][i] = 1;
	FOR (i,1,n-1)
	{
		if (x[i] == 0) 
		{
			for (int j = 1; j <= m; j++) {
				if (j-1 >= 1) dp[i][j] = (dp[i][j] + dp[i-1][j-1])%mod;
			 	dp[i][j] = (dp[i][j] + dp[i-1][j])%mod;
				if (j+1 <= m) dp[i][j] = (dp[i][j] + dp[i-1][j+1])%mod;
			}
		} 
		else 
		{
			if (x[i]-1 >= 1) dp[i][x[i]] = (dp[i][x[i]] + dp[i-1][x[i]-1])%mod;
			dp[i][x[i]] = (dp[i][x[i]] + dp[i-1][x[i]])%mod;
			if (x[i]+1 <= m) dp[i][x[i]] = (dp[i][x[i]] + dp[i-1][x[i]+1])%mod;
		}
	}
	ll result = 0;
	FOR(i,1,m) result = (result + dp[n-1][i]) % mod;
	cout << result;
	return 0; 
}