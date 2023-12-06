#include <stdio.h>
int fun(int s[], int t[])
{
    int i, j = 0;
    for (i = 0; i < 10; i++)
        if (i % 2)
        {
            t[j] = s[i];
            j++;
        }
    return j;
}
// int main()
// {
//     // int a[3]={1};
//     // int i;
//     // scanf("%d",a);
//     // for(i=1;i<=3;i++)
//     // a[0]=a[0]+a[i];
//     // printf("a[0]=%d\n",a[0]);
//     // int m[10]={9,4,12,8,2,10,7,5,1,3};
//     // int b=m[m[4]+m[8]];
//     // printf("%d",b);
//     // int a[][4]={0};

//     // char X[6];
//     // int i;
//     // for(i=0;i<6;i++)
//     // {
//     //     X[i]=getchar();
//     // }
//     // for(i=0;i<6;i++)
//     // putchar(X[i]);

//     // static int a[3][3];
//     // int i,j;
//     // for(i=0;i<3;i++)
//     // for(j=0;j<3;j++)
//     // a[i][j]=a[j][i]+i*j;
//     // printf("%d,%d",a[1][2],a[2][1]);

//     int X[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int Y[10];
//     int m, i;
//     m = fun(X, Y);
//     for (i = 0; i < m; i++)
//         printf("%d", Y[i]);
//     printf("\n");
//     return 0;
// }

 int main()
 {     int X[4][4]={{11,2,31,14},{5,16,7,4},{18,9,6,10},{17,1,3,12}};
        int i,j,k,t;
        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
                for(k=j+1;k<4;k++)
                {   if (X[i][j]>X[i][k])
                    {   t=X[i][j];
                        X[i][j]= X[i][k];
                        X[i][k]=t;
                    }
                }
         for(i=0;i<4;i++)
         {         for(j=0;j<4;j++)
                    printf("%d",X[i][j]);
              printf("\n");
         }
        return 0;
 }