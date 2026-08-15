#include <bits/stdc++.h>
using namespace std;
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
signed main ()  
{
	int n; cin >> n;
	if (n == 1) 
	{
		cout << 1;
		return 0;
	}
	if (n<=3) 
	{
		cout << "NO SOLUTION";
		return 0;
	}
	string s = "";
	FOR(i,1,n) 
	{
		if (i%2 == 0) cout << i << " ";
		else {
			string r = to_string(i);
			s += r + " ";
		}
	}
	cout << s;
	return 0;
}