#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"
// cses - Creating Strings
signed main () 
{
	fastio;
	string s; cin >> s;
	sort(s.begin(), s.end());
    string res;
    int count = 0;
    do {
        count++;
        res += s;
        res += '\n';
    } while(next_permutation(s.begin(), s.end()));

    cout << count << '\n';
    cout << res;
    return 0;
}