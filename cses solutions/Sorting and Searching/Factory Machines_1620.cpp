#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
#define ll long long
#define lli long long int
#define li long int
#define ld long double
#define vi vector<int>
#define vii vector<int, int>
#define pii pair<int, int>
using namespace std;
const lli mod = 1e9 + 7;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; 
    cin >> n >> m; 
    vector <int> machines(n);
    for (int i = 0; i < n; i++)
    {
    	cin >> machines[i];
	}
    ll low = 0;
    ll hi = 1e18;
    ll answer = 1e18;
    while (low <= hi)
    {
    	ll mid = (low+hi)/2;
    	ll products = 0;
    	for (int i = 0; i < n; i++)
    	{
    		products += min (mid/machines[i], (ll)1e9);
		}
		if(products >= m)
		{
			if(mid < answer) answer = mid;
			hi = mid - 1;
		}
		else 
			low = mid + 1;
	}
	cout << answer;
    return 0;
}
