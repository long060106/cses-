#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ln "\n" 
int n; 
void solve (int a, int b, int c, int n)
{
	if (n <= 0) return;
	solve (a, c, b, n-1);
	cout << a << " " << b << ln;
	solve (c, b, a, n-1);
}
void run ()
{
	cin >> n; 
	cout << (1<<n)- 1 << ln;
	solve (1, 3, 2, n);
}
signed main ()
{
	fastio; 
	run ();
	return 0; 
}