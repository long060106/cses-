#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

#define FOR(i,l,r); for (int i=l;i<=r;i++)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 3e4+5, mod = 1e9+7;
int n, a[N];
set <int> dp, dp1;

signed main () {

//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);
	
	cin >> n;
	FOR(i, 1, n) cin >> a[i];
	
	sort (a+1, a+n+1);
	dp.insert(a[1]); 
	FOR (i, 2, n) {
		for (int x:dp) {
			dp1.insert(x+a[i]);
		}
		for (int x:dp1) {
			dp.insert(x);
		}
		dp.insert (a[i]);
	} 
	cout << dp.size() << endl;
	for (int x:dp) cout << x << " ";
}