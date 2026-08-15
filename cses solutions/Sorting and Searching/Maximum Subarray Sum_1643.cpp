#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ln "\n"
const int MAXN = 2e5; 
ll n, a[MAXN], prefix, ans; 
ll max_n (ll a[], ll  n) 
{
	ll maxn = a[0];
	FOR(i,1,n-1)
	{
		maxn = max(maxn, a[i]); 
	}
	return maxn;
}
signed main () 
{
	
	fastio;
	
	cin >> n; 
	FOR(i,0,n-1) cin >> a[i];
	if(max_n(a, n) <= 0)
	{
		cout << max_n(a, n) << ln;
		return 0;
	}
	FOR(i,0,n-1)
	{
		prefix += a[i];
		if (prefix <= 0) prefix = 0;
		else ans = max(ans, prefix);
	}
	cout << ans << ln;
	return 0;
}