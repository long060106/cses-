/*
Problem Name: cses - Sum of Four Values
Problem Link: https://cses.fi/problemset/task/1642
Author: Nguyen Long (@LoganLee)
*/
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ln "\n"
#define pii pair<int, int>
#define vii vector<pii>
#define vi vector <int>
#define F first
#define S second
#define pb push_back
#define all(x) x.begin(),x.end()
#define mp make_pair
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define rev(i,a,b) for (int i=a; i>b; --i)

void solve () {
	int n, x; cin >> n >> x;
	vii num;
	 rep(i,0,n) {
		int k; cin >> k;
		num.pb({k, i+1});
	}
	
	sort(all(num));
	
	map <int, vii> mp;
	rep(i,0,n) {
		rep(j,i+1,n) {
			mp[num[i].F + num[j].F].pb({num[i].S, num[j].S});
		}
	}
	
	for(auto i:mp) {
		int y = x - i.F;
		auto z = mp.find(y);
		if(z!=mp.end()) {
			for (auto a:z->S) {
				for (auto b:i.S) {
					if(a.F != b.F && a.F != b.S && a.S != b.F && a.S != b.S) {
						cout << a.F << " " << b.F << " " << a.S << " " << b.S << ln;
						return;
					}
				}
			}
		}
	}
	cout << "IMPOSSIBLE" << ln;
}

signed main () {
	//Log@nLee
	IOS;
	#ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
		
	//write your code below 
	solve(); 
	
	#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    #endif
    return 0;
}