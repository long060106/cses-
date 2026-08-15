input/code.cpp: In function 'void solve()':
input/code.cpp:82:24: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long long int' [-Wformat=]
   82 |             printf("%-2d ",grid[i][j]);
      |                     ~~~^   ~~~~~~~~~~
      |                        |            |
      |                        int          long long int
      |                     %-2lld