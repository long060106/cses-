#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ln "\n"

int n,median;
vector<int> p;
ll ans;

void solve() 
{
	cin >> n; 
	p.resize(n); 
	for(int &x : p) cin >> x; 
	sort (p.begin(), p.end()); 
	median = p[n/2]; 
	for(const int &x : p) 
	{
		ans += abs(median-x);
	}
	cout << ans << ln; 
	return; 
}
int main(){
	fastio; 
	solve();
	return 0;
}