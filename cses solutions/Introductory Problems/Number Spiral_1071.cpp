#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) long long n; cin >> n
#define ll long long

signed main () 
{	
	fastio;
	
	int t; cin >> t;
	while(t--)
	{
		ask(y); ask(x);
		ll z = max(x,y);
		ll ans, z2 = (z-1)*(z-1);
		if(z%2) {                                    
			if (y == z) ans = z2 + x;
			else ans = z2 + 2*z - y;
		}
		else {
			if(x == z) ans = z2 + y;
			else ans = z2 + 2*z - x;
		}
		cout << ans << "\n";
	}
	return 0;
}