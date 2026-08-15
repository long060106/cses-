#include <bits/stdc++.h>
#define int long long
#define maxn 1001000
#define mod 1000000007
using namespace std;
int t,n,x,m,f[maxn];
void solve() {   
    int n;
    cin >> n;
    f[0]=1;// la bai toan nho nhat co the tinh
    for(int i=1;i <=n;i++) {
        for(int j=1;j <= 6;j++) {
            if (i >=j) {
                f[i]+=f[i-j]; // tinh bai toan thu i, de tinh duoc thi can phai biet trang thai f[i-j]
                f[i] %=mod; 
            }
        }
    }
    cout << f[n];
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	solve();
}

