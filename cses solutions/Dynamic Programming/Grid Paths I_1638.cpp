#include <bits/stdc++.h>
#define int long long
#define maxn 1001
#define mod 1000000007
using namespace std;
int t,n,x,m,f[maxn][maxn];
char a[maxn][maxn];
void solve() {   
  int n; 
  cin >> n;
  for(int i=1; i<=n;i++) {
      for(int j=1;j <=n;j++) {
          f[i][j]=0;
          cin >> a[i][j];
      }
  }
  f[0][1]=1;
  for(int i=1;i <=n;i++) {
      for(int j=1;j <=n;j++) {
          if (a[i][j] == '*') {
              f[i][j]=0;
              continue;
          }
          f[i][j]=f[i-1][j]+f[i][j-1];
          f[i][j] %=mod;
      }
  }
  cout << f[n][n];
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
}