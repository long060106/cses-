#include<bits/stdc++.h>
using namespace std;

//elevator rides

#define ar array
#define ll long long 
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 1e9

int n, x;
int a[25];
signed main() {
    // read the input
    cin >> n >> x;
    vector<ll> people(n);
    for (int i = 0; i < n; i++) cin >> people[i];
 
    // use bit-masking to compute the dp table
    int limit = 1 << n;
    vector<pair<ll, ll>> dp(limit); // (numberOfRides, totalWeightOfLastRide)
    dp[0] = {1, 0};
 
    for (int mask = 1; mask < limit; mask++) {
        pair<ll, ll> bestResult = {INT_MAX, INT_MAX};
        for (int i = 0; i < n; i++) {
            if (((1 << i) & mask) == 0) continue;
            auto res = dp[(1 << i) ^ mask];
            if (res.second + people[i] <= x) {
                res.second += people[i];
            } else {
                res.first += 1;
                res.second = people[i];
            }
            bestResult = min(bestResult, res);
        }
        dp[mask] = bestResult;
    }
    cout << dp[limit - 1].first;
 
    return 0;
}