#include <iostream>
using namespace std;

// #define M  1+2
// #define N  2*M+1
// int main()
// {
//     int x=N;
//     cout<<x<<endl;
//     return 0;
// }

// #define M(x)  x*x
// #define N(x, y)  M(x)+M(y)
// int main()
// {
//     int z=N(2, 2+3);
//     cout<<z<<endl;
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 0, y = 1, z;
//     z = 2 * x + y;
// #ifdef TEST
//     printf("%d,%d,", x, y);
// #endif
//     printf("%d\n", z);
//     return 0;
// }

// #include <stdio.h>
// #define ADD(y) 3.54 + y
// #define PR(a) printf("%d", (int)(a))
// #define PR1(a) \
//     PR(a);     \
//     putchar('\n')
// int main()
// {
//     int i = 4;
//     PR1(ADD(5) * i);
//     return 0;
// }

#include <stdio.h>
#define MIN(x, y) (x) < (y) ? (x) : (y)
int main()
{
    int i, j, k;
    i = 10;
    j = 15;
    k = 10 * MIN(i, j);
    printf("%d", k);
    return 0;
}