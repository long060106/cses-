//trahkino
#include <bits/stdc++.h>
using namespace std;
int dp[20][200005], a[200005];
int n, q, x, y;

void input()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];
}

void preprocess()
{
    for (int i = 1; i <= n; ++i)
        dp[0][i] = a[i];
    for (int j = 1; j <= 17; ++j)
    {
        for (int i = 1; i + (1 << j) - 1 <= n; ++i)
        {
            dp[j][i] = min(dp[j-1][i], dp[j-1][i + (1 << (j-1))]); 
        }
    }
}

int queryMin(int x, int y)
{
    int k = __lg(y - x + 1);
    return min(dp[k][x], dp[k][y - (1 << k) + 1]);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    preprocess();
    while (q--)
    {
        cin >> x >> y;
        cout << queryMin(x, y) << "\n";
    }

    return 0;
}
