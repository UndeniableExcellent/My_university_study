#include <stdio.h>
int main()
{
    int a[5]={ 1,2 ,3,4,5},*p=&a; *p=5;
    printf("a[0]=%d\n",a[0]);
    // int a,*p=&a;*p=2; 
    // printf("%d\n",a);
    return 0;
}