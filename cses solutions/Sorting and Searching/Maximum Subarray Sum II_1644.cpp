/*
Problem Name: Maximum Subarray Sum II
Problem Link: https://cses.fi/problemset/task/1644
Author: Sachin Srivastava (mrsac7)
*/
#include<bits/stdc++.h>
using namespace std;
template<typename... T>
void see(T&... args) { ((cin >> args), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void putl(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {cerr << *it << "=" << a << ", "; err(++it, args...);}
#define int long long
#define pb push_back
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define vc vector
#define L cout<<'\n';
#define E cerr<<'\n';
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define rev(i,a,b) for (int i=a; i>b; --i)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define setpr(x) cout<<setprecision(x)<<fixed
#define sz size()
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}

signed main(){
    IOS;
    #ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n,x,y; cin>>n>>x>>y;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int pre[n+1] = {0};
    for (int i = 1; i <= n; i++) 
        pre[i] = pre[i-1] + a[i-1];
    int s = 0, len = x;
    set<pair<int,int>> st;
    for (int i = 0; i < x; i++)
        s += a[i];
    st.insert({pre[1], 0});
    int mx = s;
    for (int i = x; i < n; i++) {
        int z = pre[i+1] - pre[i+1-x];
        if (len == y) {
            auto it = st.begin();
            s = max(z, s + a[i] - (it->first - pre[i-len]));
            if (s == z) len = x, st.clear();
            else {
                for (int k = i-y; k <= it->second; k++)
                    st.erase({pre[k+1], k});
                len = i - it->second;
            }
            st.insert({pre[i-x+2], i-x+1});
        }
        else {
            s = max(z, s + a[i]);
            if (s == z) len = x, st.clear();
            else len++;
            st.insert({pre[i-x+2], i-x+1});
        }
        mx = max(mx, s);
    }
    cout<<mx;
    #ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    #endif
    return 0;
}