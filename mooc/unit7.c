#include <stdio.h>
// int main()
// {
//     int a[5]={ 1,2 ,3,4,5},*p=&a; *p=5;
//     printf("a[0]=%d\n",a[0]);
//     // int a,*p=&a;*p=2; 
//     // printf("%d\n",a);
//     return 0;
// }

// int main()
// {
//     double arr[10],(*p)[10]=&arr;
//     scanf("%lf",p[6]);
//     printf("%lf\n",arr[6]);
//     return 0;
// }
int main()
{
    // int a[10]={0,1,2,3,4,5,6,7,8,9},*p; p=a+1;
    // printf("%d\n",p[4]);
    int a[2][3]={1,2,3,4,5,6},(*p)[3]; p=a;
    printf("%d\n",*(*(p+1)+2));
    //printf("%d\n",p[1]+1);
    return 0;
}