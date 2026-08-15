input/code.cpp: In function 'void see(T& ...)':
input/code.cpp:9:40: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
    9 | void see(T&... args) { ((cin >> args), ...);}
      |                                        ^~~
input/code.cpp: In function 'void put(T&& ...)':
input/code.cpp:11:49: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
   11 | void put(T&&... args) { ((cout << args << " "), ...);}
      |                                                 ^~~
input/code.cpp: In function 'void putl(T&& ...)':
input/code.cpp:13:50: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
   13 | void putl(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
      |                                                  ^~~