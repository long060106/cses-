#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"
int n, ans, temp;
vector <int> k;
set <int> s;
void solve ()
{
	cin >> n;
	k.resize(n);
	for (int &x:k) cin >> x;
	int i = 0, j = 0; 
	while (i < n && j < n)
	{
		while (j < n && !s.count(k[j]))
		{
			s.insert(k[j]);
			ans = max(ans, j-i+1);
			j++;
		}
		while (i < n && s.count(k[j]))
		{
			s.erase(k[i]);
			i++;
		}
	}
	cout << ans << ln;
	return;
}
signed main ()
{
	fastio;
	#ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();
    return 0;
}