#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ln "\n"
#define FOR(l, r) for(int i = l; i <= r; i++) 
#define reFOR(r, l) for(int i = r; i <= l; i--)

ll n, mx, s;
vector <ll> books;

signed main ()
{
	//Log@nLee
	IOS;
	
	#ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
	cin >> n;
	for (int i = 0; i < n; i ++) {
		ll x; cin >> x;
		books.push_back(x);
		mx = max(mx, x);
		s += x;
	}
	
	cout << max(s, mx*2);
	
	#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    #endif
    
	return 0;
}