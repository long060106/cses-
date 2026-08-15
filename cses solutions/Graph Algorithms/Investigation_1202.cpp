input/code.cpp: In function 'void solve()':
input/code.cpp:33:35: warning: comparison of integer expressions of different signedness: 'long long int' and 'std::vector<long long int>::size_type' {aka 'long unsigned int'} [-Wsign-compare]
   33 | #define rep(i,a,b) for (int i=a; i<b; ++i)
      |                                   ^
input/code.cpp:94:5: note: in expansion of macro 'rep'
   94 |     rep(i,0,v.sz){
      |     ^~~