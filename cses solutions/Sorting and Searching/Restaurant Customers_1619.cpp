#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ln "\n"
int n, a, b, i;
int main()
{
	fastio;
	vector< pair <int,int> > time;
	cin >> n;
	for(int i=0; i<n; i++) 
	{
		cin >> a >> b; 
		time.push_back ( make_pair(a, 1));
		time.push_back ( make_pair(b, -1));
	}
	
	sort(time.begin(), time.end());
	
	int curr_ppl = 0;
	int max_ppl = 0; 
	for (const pair<int, int>& t : time) 
	{
		curr_ppl += t.second;
		max_ppl = max(max_ppl, curr_ppl);
	}
	
	cout << max_ppl << ln;
	
	return 0;
}