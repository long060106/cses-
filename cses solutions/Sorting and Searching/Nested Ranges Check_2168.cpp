#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ln '\n'
// cses - nested ranges check 
struct range 
{
	int r, l, index;
	bool operator < (const range &other) const  // cmp for sort
	{
		if (l == other.l) return r > other.r; 
		return l < other.l;
	}
};
int maxEnd = 0, minEnd = 1e9+1;
int main ()
{
//	#ifdef LOCAL
//	freopen ("Name.txt", "r", stdin);
//	freopen ("Name.txt", "w", stdout);
//	#endif
	fastio;
	int n; cin >> n;
	vector <range> ranges(n);
	vector <bool> contained(n);
	vector <bool> contains(n);
	for (int i = 0; i < n; i++)
	{
		cin >> ranges[i].l;
		cin >> ranges[i].r;
		ranges[i].index = i;
	}
	sort(ranges.begin(), ranges.end());
	for (int i = 0; i < n; i++)
	{
		if(ranges[i].r <= maxEnd) contained[ranges[i].index] = true;
		maxEnd = max(maxEnd, ranges[i].r);
	}
	for (int i = n-1; i >= 0; i--)
	{
		if(ranges[i].r >= minEnd) contains[ranges[i].index] = true;
		minEnd = min(minEnd, ranges[i].r);
	}
	for(int i = 0; i < n; i++) cout << contains[i] << " ";
	cout << ln;
	for (int i = 0; i < n; i++) cout << contained[i] << " ";
	cout << ln;
	return 0;
}