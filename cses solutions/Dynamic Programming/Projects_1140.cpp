#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long 
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 1e9

const int mx = 2e5;
int n;
ar<int,3> arr[mx];
signed main () 
{
	cin >> n;
	FOR(j,0,n-1) cin >> arr[j][1] >> arr[j][0] >> arr[j][2];
	sort(arr,arr+n);
	set<ar<ll, 2>> dp;
	dp.insert({0, 0});
	ll ldp = 0;
	FOR(i,0,n-1) 
	{
		auto it = dp.lower_bound({arr[i][1]});
		--it;
		ldp = max(ldp,(*it)[1] + arr[i][2]);
		dp.insert({arr[i][0], ldp});
	}
	//cout << (*--dp.end())[1];
	cout << ldp << "\n";
	return 0;
}