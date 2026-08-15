#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) ll n; cin >> n
#define ll long long
#define llu long long unsigned
#define ln "\n"

signed main () //sigma i(1-->n)  (n/5^i) 
{
	//   ***   //
	   fastio;
	//   ***   //
	
	int n; cin >> n;
	int ans = 0; 
	ll powfive = 5;
	while (powfive <= n) 
	{
		ans += (n/powfive);
		powfive*=5;
	}
	cout << ans << ln;
	return 0;
}