input/code.cpp: In function 'void solve()':
input/code.cpp:32:35: warning: comparison of integer expressions of different signedness: 'long long int' and 'std::vector<long long int>::size_type' {aka 'long unsigned int'} [-Wsign-compare]
   32 | #define rep(i,a,b) for (int i=a; i<b; ++i)
      |                                   ^
input/code.cpp:63:5: note: in expansion of macro 'rep'
   63 |     rep(i,1,v.sz){
      |     ^~~