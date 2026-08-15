#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int N, cnt, X[100], cot[100], d1[100], d2[100];
char Y[100][100];

//void inkq()
//{
//	for (int i = 1; i <= N ; i ++) cout << "Con hau o hang thu " << i << " nam o cot " << X[i] << endl;
//	cout << endl;
//} 
void input ()
{
	for (int i = 1; i <= N; i++) 
	{
		for (int j = 1; j <= N; j++) cin >> Y[i][j];
	}
}
void chess (int i)
{
	for (int j = 1; j <= N; j++)
	{
		if(cot[j] == 0 && d1[i-j+N] == 0 && d2[i+j-1] == 0 && Y[i][j] == '.')
		{
			X[i] = j;
			cot[j] = d1[i-j+N] = d2[i+j-1] = 1; // mark
			if(i == N) ++cnt;
			//if(i == N) inkq();
			else chess(i+1);
			cot[j] = d1[i-j+N] = d2[i+j-1] = 0;
		}
	}
} 
signed main ()
{
	fastio; 
	
	//cin >> N; 
	N = 8;
	input();
	chess(1);
	cout << cnt << endl;
	return 0;
}