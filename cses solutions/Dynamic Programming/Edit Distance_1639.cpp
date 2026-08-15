#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define FOR(i,l,r); for(int i=l;i<=r;i++)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

string s,S; // turn s into S
int dp[5005][5005];
signed main () {
	fastio;
	
	cin >> s >> S;
	int a = s.length(), b = S.length();
	FOR(i,1,a) dp[i][0] = i;
	FOR(j,1,b) dp[0][j] = j;
	FOR(i,1,a) 
	{
		FOR(j,1,b) 
		{
			if(s[i-1] == S[j-1]) dp[i][j] = dp[i-1][j-1];
			else 
			{
			dp[i][j] = min(min(dp[i][j-1] + 1, dp[i-1][j] + 1), dp[i-1][j-1]+1);
			}
		}
	}
	cout << dp[a][b];
} 