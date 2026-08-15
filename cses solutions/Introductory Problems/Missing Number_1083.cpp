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
	int n; cin >> n;
	int a[n-1];
	set <int> s;
	FOR(i,0,n-2) {
		cin >> a[i]; s.insert(a[i]);
	}
	while (n) {
		if (s.count(n) == 0) cout << n;
		--n;
	} 
}