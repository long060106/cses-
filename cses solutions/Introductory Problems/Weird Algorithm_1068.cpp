#include<bits/stdc++.h>
using namespace std;
#define ar array
#define lli long long int 
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 1e9

signed main ()
{
	fastio;
	lli  n; cin >> n; cout << n << " "; // 10000000
	while(n!=1) {
		if(n&1) n = n*3+1;
		else n/=2;
		cout << n << " ";
	}
}