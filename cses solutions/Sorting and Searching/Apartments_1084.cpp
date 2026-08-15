#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"
const int MAX_N = 2e5;
int n, m, k, a[MAX_N], b[MAX_N], ans;
signed main ()
{
	fastio;
	cin >> n >> m >> k; 
	FOR(i,0,n-1) cin >> a[i];
	FOR(i,0,m-1) cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	ll i = 0, j = 0; 
	while (i < n && j < m) 
	{
		// Found a suitable apartment for the applicant
		if (abs(a[i] - b[j]) <= k){
			++i; ++j;
			++ans;
		}
		else{
			// If the desired apartment size of the applicant is too big,
			// move the apartment pointer to the right to find a bigger one
			if (a[i] - b[j] > k){
				++j;
			}
			// If the desired apartment size is too small,
			// skip that applicant and move to the next person
			else{
				++i;
			}
		}	
	}
	cout << ans << ln;
}