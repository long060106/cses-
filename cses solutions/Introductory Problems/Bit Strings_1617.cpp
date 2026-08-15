#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) ll n; cin >> n
#define ll long long
#define llu long long unsigned
#define ln "\n"
const int mod = int(1e9+7);
signed main () 
{ 
	fastio;
	ask(n);
	ll ans = 1;
	FOR(i,1,n) 
	{
		ans*=2;
		if(ans>=mod) ans-=mod;
	}
	cout << ans << ln;
	return 0;
}