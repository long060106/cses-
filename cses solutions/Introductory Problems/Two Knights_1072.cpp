#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long

signed main () {
	fastio; 
	ask(n);
	FOR(k,1,n) 
	{
		ll a1=k*k, a2=a1*(a1-1)/2;
		if(k>2) a2-=4*(k-1)*(k-2);
		cout << a2 << "\n";
	}
	return 0; 
}