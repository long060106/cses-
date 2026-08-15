#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ln "\n"
int n;
vector<int> v;
set <int> s; 
ll ans;
void solve () 
{
	cin >> n; 
	ans = n; 
	v.resize (n);
	for(int &x : v) cin >> x; 
	for (int i = 0; i < n; i++)
	{
		s.insert(v[i]);
		auto pos = s.find(v[i]+1);
		if(pos == s.end() && v[i] != n) --ans;
	}
	cout << ans << ln;
	return; 
}
signed main () 
{
	fastio; 
	solve();
	return 0; 
}