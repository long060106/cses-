#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ln "\n"
#define FOR(l, r) for(int i = l; i <= r; i++) 
#define reFOR(r, l) for(int i = r; i <= l; i--)



signed main ()
{
	//Log@nLee
	ios;
	int n; cin >> n; 
	vector<pair<int, int>> task;
	
	for (int i = 0; i < n; i++)
	{
		int x, y; 
		cin >> x >> y;
		task.push_back(make_pair(x, y));
	}
	sort(task.begin(), task.end());
	
	ll time = 0, reward = 0;

	for (int i = 0; i < n; i++)
	{
		time += task[i].first;
		reward += (task[i].second - time);
	}
	cout << reward << ln;
	return 0; 	
}