#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ln '\n'
ll prefix[200010], n, q, x[200010];
void ktao ()
{
	cin >> n >> q;
	for (int i = 1; i <= n; i++) 
	{
		cin >> x[i]; 
		prefix[i] = prefix[i-1] + x[i];
	}
}
void solve ()
{
	ktao();
	while (q--) 
	{ 
		ll a, b; cin >> a >> b;
		ll ans = prefix[b]-prefix[a-1];
		cout << ans << ln;
	}
}
signed main ()
{
	fastio; 
	solve();
	return 0; 
}