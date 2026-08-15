#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"
signed main () 
{
	fastio;
	ll n; cin >> n; 
	ll sum = n*(n+1)/2;
	if (sum%2) 
	{
		cout << "NO" << ln;
		return 0; 
	}
	cout << "YES" << ln;
	set <ll> s1, s2;
	ll half = sum/2;
	FOR(i,1,n) s1.insert(i);
	ll t = n;
	while(s1.count(half) == 0) 
	{
		half-=t; 
		s2.insert(t);   
		s1.erase(t);
		--t; 
	}
	s1.erase(half);
	s2.insert(half);
	cout << s1.size() << ln;
	for(int x:s1) cout << x << " ";
	cout << s2.size() << ln;
	for(int x:s2) cout << x << " ";
	return 0;
}