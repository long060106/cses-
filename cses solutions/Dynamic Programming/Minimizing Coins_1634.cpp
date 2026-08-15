#include <bits/stdc++.h>
#define int long long
#define maxn 1001000
#define mod 1000000007
using namespace std;
int t,n,x,m,f[maxn],v[maxn];
void solve() {   
    int n,x;
    cin >> n >> x;
    for(int i=1;i <=n;i++) cin >> v[i];
    for(int i=1;i <= x;i++) f[i]=1e9;
    f[0]=0;
    for(int i=1;i <=x;i++) {
        for(int j=1;j <= n;j++) {
            if (v[j] <= i && f[i-v[j]] != 1e9) {
                f[i]=min(f[i],f[i-v[j]]+1);
            }
        }
    }
    if (f[x] != 1e9) cout << f[x];
    else cout << -1;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
}

