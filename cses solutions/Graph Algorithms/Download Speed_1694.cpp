input/code.cpp: In function 'long long int xpow(long long int, long long unsigned int)':
input/code.cpp:50:9: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
   50 |         if (y&1) res= (res*x); y=y>>1; x=(x*x);
      |         ^~
input/code.cpp:50:32: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
   50 |         if (y&1) res= (res*x); y=y>>1; x=(x*x);
      |                                ^