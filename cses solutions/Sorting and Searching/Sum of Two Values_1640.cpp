#include <bits/stdc++.h>
using namespace std;  
#define ll long long 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"
#define pb push_back 
#define f first
#define s second 

ll N, X;
vector< pair<ll, ll> > a;
int main() {
	
	fastio; 
	
	cin >> N >> X;
	
	// append the element and its index
	for (int i = 0; i < N; i++) {
		ll x;
		cin >> x;
		a.pb({x, i + 1});
	}
	
	sort(a.begin(), a.end());
	int i = 0, j = N - 1;
	
	while (i < j) {
		// adjust left and right pointers.
		if(a[i].f + a[j].f > X)
			j--;
		else if (a[i].f + a[j].f < X)
			i++;
		else if (a[i].f + a[j].f == X) {
			cout << a[i].s << " " << a[j].s;
			return 0;
		}
	}
	cout << "IMPOSSIBLE" << endl;
}