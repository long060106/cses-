#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ln "\n"
ll n, a, b, ans;
bool cmp(pair<ll,ll> &a, pair<ll,ll> &b)
{
	return (a.second < b.second);
}
const int mod = 1e9+7;
signed main()
{
	fastio;
	vector< pair <ll,ll> > time;
	cin >> n;
	for(int i=0; i<n; i++) 
	{
		cin >> a >> b; 
		time.push_back ( make_pair(a, b));
	}
	sort(time.begin(), time.end(), cmp);
	ll lmft = -1;
	for(const pair<ll,ll>& t : time) 
	{
		if(lmft <= t.first) 
		{
			++ans;
			lmft = t.second;
		}
	}
	cout << ans << ln;
	return 0;
}