/*
Problem Name: 
Problem Link: 
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

//ll n, a[200005], b[200005];
//void solve ()
//{
//	cin >> n;
//	rep(i,0,n) 
//		cin >> a[i];
//	
//	rev(i,n-2,-1){
//		if(a[i+1] > a[i]) 
//		{
//			for (int j = i+1; j < n && a[i] < a[j]; j++){
//				if(b[j] == 0) b[j] = i+1;
//			}
//		}
//	}
//	rep(i,0,n){
//		cout << b[i] << " ";
//	}
//}
void solve ()
{
	int n; cin >> n;
	vii v;
	rep(i,1,n+1){
		int x; cin >> x;
		int ans = 0;
		while(v.size()){
			if(x <= v.back().F) v.pop_back();
			else {
				ans = v.back().S;
				break;
			}
		}
		cout << ans << " ";
		v.pb({x,i});
	}
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