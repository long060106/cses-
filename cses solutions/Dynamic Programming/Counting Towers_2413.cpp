#include <bits/stdc++.h>
using namespace std;
 
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll = long long;
 
const int mod = 1e9+7;
const int maxn = 1e6+10;

int main() 
{
    FASTIO
    
    vector<vector<ll>> dp(maxn, vector<ll>(8,0));
    for (int i = 0; i < 8; i++) dp[0][i] = 1;
    for (int i = 1; i < maxn; i++) 
	{
		for (int j = 0; j < 8; j++) {
			if (j == 0 || j == 2 || j == 4 || j == 5 || j == 6) {
			dp[i][j] = dp[i-1][0] +
					   dp[i-1][3] +
					   dp[i-1][4] +
					   dp[i-1][5] +
					   dp[i-1][6];
			dp[i][j] %= mod;							
			}
			else {
				dp[i][j] = dp[i-1][1] +
						   dp[i-1][2] +
						   dp[i-1][7];
				dp[i][j] %= mod;
			}
		}
    }
    int t; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	cout << (dp[n-1][2] + dp[n-1][7] )%mod<< "\n";
	}
    return 0;
}