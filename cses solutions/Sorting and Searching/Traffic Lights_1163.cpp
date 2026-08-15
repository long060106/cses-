#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ln "\n"
int x, n;
set <int> lights;
multiset <int> ans; 
void solve ()
{
	cin >> x >> n;
	lights.insert(0); lights.insert(x);
	ans.insert(x);
	for (int i = 0; i < n; i++) 
	{
		int k; cin >> k;
		lights.insert(k);
		auto it = lights.find(k);
		int previousval = *prev(it);
		int nextval = *next(it);
		ans.erase (ans.find(nextval-previousval));
		ans.insert (k-previousval);
		ans.insert (nextval-k);
		cout << *ans.rbegin() << " ";
	}
}
signed main () 
{
	fastio;
	solve();
	return 0;
}