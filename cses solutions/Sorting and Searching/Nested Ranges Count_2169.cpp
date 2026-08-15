#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
  
using namespace std;
using namespace __gnu_pbds; 
template <typename T> // dinh nghia mau template cho mot struct hoac mot class, thay T chap nhan cho nhieu kieu du lieu khac nhau
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>; // tree_order_statistics_node_update cung cap cac ham co san nhu order of key hay find by oder
  
// Driver program to test above functions
#define ln '\n'
#define ll long long

struct range
{
	int l, r, index; 
	bool operator < (const range &other) const
	{
		if(l == other.l)
			return r > other.r;
		return l < other.l;
	}
};

signed main ()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	
	vector <range> ranges(n);
	vector <int> contained(n);
	vector <int> contains (n);
	ordered_set <pair<int, int>> rightBoundaries;
	
	for (int i = 0; i < n; i++)
	{
		cin >> ranges[i].l;
		cin >> ranges[i].r;
		ranges[i].index = i;
	}
	sort(ranges.begin(), ranges.end());
	
	for (int i = 0; i < n; i++)
	{
		rightBoundaries.insert({ranges[i].r, -1*i});
		contained[ranges[i].index] = rightBoundaries.size() - rightBoundaries.order_of_key({ranges[i].r, -1*i}) - 1; // order of key cung cap vi tri trong ordered set()
	}
	
	rightBoundaries.clear();
	
	for (int i = n-1; i >= 0; i--)
	{
		rightBoundaries.insert({ranges[i].r,-1*i});
		contains[ranges[i].index] = rightBoundaries.order_of_key({ranges[i].r, -1*i});
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << contains[i] << " ";
	}
	
	cout << ln;
	
	for (int i = 0; i < n; i++)
	{
		cout << contained[i] << " ";
	}
	
	return 0;
}