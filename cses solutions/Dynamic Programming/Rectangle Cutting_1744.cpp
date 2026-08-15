input/code.cpp: In function 'int main()':
input/code.cpp:22:25: warning: iteration 504 invokes undefined behavior [-Waggressive-loop-optimizations]
  FOR(i,1,maxn) dp[i][i] = 0;
                ~~~~~~~~~^~~
input/code.cpp:5:34: note: within this loop
 #define FOR(i,l,r); for(int i=l;i<=r;i++)
input/code.cpp:22:6:
  FOR(i,1,maxn) dp[i][i] = 0;
      ~~~~~                        
input/code.cpp:22:2: note: in expansion of macro 'FOR'
  FOR(i,1,maxn) dp[i][i] = 0;
  ^~~