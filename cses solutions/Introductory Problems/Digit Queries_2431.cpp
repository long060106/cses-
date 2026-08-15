#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"

long long q, k, w, p;

int main() 
{
	fastio;
	
  	for (cin >> q; q--; cout << to_string(p + (k - 1) / w)[(k - 1) % w] << endl)
    	for (cin >> k, w = 1, p = 1; k > w * p * 9; k -= w * p * 9, w += 1, p *= 10);
    	
}
        // ------------------------------VIP------------------------------ //