#include <bits/stdc++.h>
using namespace std; 

#define ln '\n'
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int> > > rooms;
int RoomId = 1, roomAssign[200005];

signed main ()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n; 
	vector <pair<pair<int, int>, int>> arrivalTime(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arrivalTime[i].first.first >> arrivalTime[i].first.second;
		arrivalTime[i].second = i;
	}
	sort(arrivalTime.begin(), arrivalTime.end());
	
	for (int i = 0; i < n; i++)
	{
		if(rooms.size() == 0)
		{
			roomAssign[arrivalTime[i].second] = 1;
			rooms.push({arrivalTime[i].first.second, 1});
		}
		else
		{
			if(rooms.top().first < arrivalTime[i].first.first)
			{
				roomAssign[arrivalTime[i].second] = rooms.top().second;
				pair<int, int> x = rooms.top();
				rooms.pop();
				rooms.push({arrivalTime[i].first.second, x.second});			
			}
			else
			{
				++RoomId;
				roomAssign[arrivalTime[i].second] = RoomId;
				rooms.push({arrivalTime[i].first.second, RoomId});
			}
		}
	}
	cout << RoomId << ln; 
	for (int i = 0; i < n; i++)
	{
		cout << roomAssign[i] << " ";
	}
	return 0; 
}