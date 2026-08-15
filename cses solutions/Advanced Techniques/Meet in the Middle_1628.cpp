input/code.cpp: In function 'void see(T& ...)':
input/code.cpp:4:40: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
    4 | void see(T&... args) { ((cin >> args), ...);}
      |                                        ^~~
input/code.cpp: In function 'void put(T&& ...)':
input/code.cpp:6:49: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
    6 | void put(T&&... args) { ((cout << args << " "), ...);}
      |                                                 ^~~
input/code.cpp: In function 'void putl(T&& ...)':
input/code.cpp:8:50: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
    8 | void putl(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
      |                                                  ^~~
input/code.cpp: In function 'void solve()':
input/code.cpp:73:42: warning: comparison of integer expressions of different signedness: 'int' and 'std::vector<int>::size_type' {aka 'long unsigned...