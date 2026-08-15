#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"
int n;
vector <int> k;
multiset <int> towers;
void solve ()
{
	cin >> n; 
	k.resize (n);
	for (int &x:k) cin >> x; 
	for (int i = 0; i < n;  i++)
	{
		if (towers.size () == 0) towers.insert(k[i]);
		else 
		{
			auto it = towers.upper_bound(k[i]);
			if (it == towers.end()) towers.insert(k[i]);
			else 
			{
				towers.erase (it);
				towers.insert (k[i]);
			}
		}
	}
	cout << towers.size() << ln;
	return;
}
signed main ()
{
	fastio; 
	solve ();
	return 0; 
}