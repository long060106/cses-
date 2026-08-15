#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll dp[1000005], modd = 1e9+7;
signed main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, x; cin >> N >> x;
    int a[N+1] ;
    for (int i = 1; i <= N; i++) {
    	cin >> a[i];	
	}
    sort(a+1, a+N+1);
    dp[0] = 1;
    for (int i = 1; i <= N; i++) {
    	for (int j = a[i]; j <= x; j++) {
    		dp[j] += dp[j - a[i]];
    		if (dp[j] >= modd) dp[j] -= modd;
		}
	}
	cout << dp[x];
    return 0;
}