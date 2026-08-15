#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ln '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>;
//Josephus problem II
int n, k, start_position, remove_position;
ordered_set <int> children;

void solve ()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++) children.insert (i);
	while (children.size() > 0)
	{
		start_position %= children.size();
		remove_position = (start_position + k) % children.size();
		start_position = remove_position; 
		auto t = children.find_by_order (remove_position);
		cout << *t << " ";
		children.erase(t);
	}
}
signed main ()
{
	#ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fastio;
    solve ();
    return 0; 
}