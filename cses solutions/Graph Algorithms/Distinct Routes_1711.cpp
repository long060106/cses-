input/code.cpp: In function 'void solve()':
input/code.cpp:94:9: warning: this 'for' clause does not guard... [-Wmisleading-indentation]
   94 |         for (auto i: v) put(i);L;
      |         ^~~
input/code.cpp:30:11: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'for'
   30 | #define L cout<<'\n';
      |           ^~~~
input/code.cpp:94:32: note: in expansion of macro 'L'
   94 |         for (auto i: v) put(i);L;
      |                                ^