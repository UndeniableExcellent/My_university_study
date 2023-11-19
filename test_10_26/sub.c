#include <stdio.h>
// int main()
// {
//     //输出2-1000的孪生素数
//     int i,j;
//     for(i=2;i<=1000;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i%j==0)
//             {
//                 break;
//             }
//             if(j==i)
//             {
//                 printf("%d\n",i);
//                 break;
//             }
//             continue;
//             //break;
//         }
//         continue;
//     }
//     return 0;
// }

//打印hello world
// int main()
// {
//     printf("hello world");
//     return 0;
// }

extern int add(int a,int b);

int main()
{
    int a=1;
    int b=2;
    int c=add(a,b);
    printf("%d\n",c);
    return 0;
}