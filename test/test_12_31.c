//水仙花数
#include<stdio.h>
int main()
{
    int i,j,k,a,b,c;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=(i-a*100)/10;
        c=i-a*100-b*10;
        if(i==a*a*a+b*b*b+c*c*c)
        printf("%d\n",i);
    }
    return 0;
}