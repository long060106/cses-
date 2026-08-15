#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fillchar(a,x) memset(a, x, sizeof (a))

const int N = 2e5+5, mod = 1e9+7;
int n, a[N], dp[N];

int main() {
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);
//	16
//	0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15

	cin >> n;
	FOR(i,1,n) cin >> a[i];
	
	int LIS = 1;
	dp[LIS] = a[1];
	
	FOR(i, 2, n) 
	{
		int l = 1, r = LIS, j = 0;
		while (l <= r) {
			int m = (l + r)/2;
			if (dp[m] < a[i]) {
				l = m + 1;
				j = m;
			}
			else r = m-1;
		}
		
		if (j == LIS) dp[++LIS] = a[i];
		if (a[i] <= dp[j+1]) dp[j+1] = a[i];
		
	}
	cout << LIS;
	return 0;
}