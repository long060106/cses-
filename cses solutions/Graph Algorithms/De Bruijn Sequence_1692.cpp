input/code.cpp: In function 'void rec(std::string)':
input/code.cpp:51:13: warning: comparison of integer expressions of different signedness: 'std::__cxx11::basic_string<char>::size_type' {aka 'long unsigned int'} and 'long long int' [-Wsign-compare]
   51 |     if (s.sz==n-1) {mp[s]=++k; mp2[k] = s; return;}
      |         ~~~~^~~~~