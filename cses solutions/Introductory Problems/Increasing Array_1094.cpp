#include <bits/stdc++.h>
using namespace std;
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
signed main ()  
{
	fastio;
	int n; cin >> n;
	long long a[n];
	long long result = 0; 
	FOR(i,0,n-1) cin >> a[i];
	FOR(i,0,n-2) 
	{
		if(a[i] > a[i+1]) {
			result += a[i]-a[i+1];
			a[i+1] = a[i];
		}
	}
	cout << result; 
}