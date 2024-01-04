// #include <stdio.h>
// int main()
// {
//     int a=1,b=1,c=2;
//     printf("%d\n",!((a<b)&&!c||1));
//     printf("%d\n",a&&b);
//     printf("%d\n",a||b+c&&b-c);
//     printf("%d\n",a<=b);
//     return 0;
// }
#include<stdio.h>
#include <stdio.h>
typedef struct  st
{
    int  x,y;
}ST;
ST data[2]={{1,2},{3,4}};
int main()
{
    ST *p=data;
    printf("%d\n",(++p)->x++);
    return 0;
}