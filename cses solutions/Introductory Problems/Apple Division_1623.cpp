#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"
// apple division 

int n, a[20];

ll solve (int i, ll s1, ll s2) 
{
	if(i==n) return abs(s1-s2);
	return min(solve(i + 1, s1 + a[i], s2), solve(i + 1, s1, s2 + a[i]));
}
signed main () 
{
	fastio;
	
	// Fuck Ratings, I'm in love with Experience.
	
	cin >> n;
	
	FOR(i,0,n-1) cin >> a[i];
		
	cout << solve(0, 0, 0) << ln;
	return 0; 
}