input/code.cpp: In function 'void see(T& ...)':
input/code.cpp:12:40: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
   12 | void see(T&... args) { ((cin >> args), ...);}
      |                                        ^~~
input/code.cpp: In function 'void put(T&& ...)':
input/code.cpp:14:49: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
   14 | void put(T&&... args) { ((cout << args << " "), ...);}
      |                                                 ^~~
input/code.cpp: In function 'void putl(T&& ...)':
input/code.cpp:16:50: warning: fold-expressions only available with '-std=c++17' or '-std=gnu++17'
   16 | void putl(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
      |                                                  ^~~