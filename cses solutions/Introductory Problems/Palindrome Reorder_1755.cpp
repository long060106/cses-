#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i,l,r); for(int i=l;i<=r;++i)
#define reFOR(i,r,l); for(int i=r;i>=l;--i)
#define ask(n) int n; cin >> n
#define ll long long
#define ln "\n"
 
string s, middle, str;
char letter = 'A';
int sum;
void reverseStr(string &str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}
signed main () 
{
	fastio;
	cin >> s;
	while (letter >= 'A' && letter <= 'Z')
	{
		ll n = count (s.begin(), s.end(), letter);
		if(sum == 2) {
			cout << "NO SOLUTION" << ln;
			return 0;
		}
		else if (n == 0) {
			++letter;
			continue;
		}
		else if (n%2 == 1) {
			++sum;
			FOR(i,1,n) middle+=letter;
			++letter;
			continue;
		}
		FOR(i,1,n/2) {
			str += letter;
		}
		++letter;
	}
	cout << str << middle;
	reverseStr(str);
	cout << str;
}