//验证歌德巴赫猜想：2000以内的正偶数（不包括2）都能够分解为两个质数之和。
//（算法提示：将整数分解为两个整数，然后判断它们是否均为质数。
//若是，则满足题意并输出；否则重新进行分解和判断。
//其中，判断一个整数是否为质数采用函数实现。每个偶数只要得到一种分解就停止，不必要求出该偶数的所有质数和组合）
#include <stdio.h>
int isPrime(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int i,j,k;
    for(i=4;i<=2000;i+=2)
    {
        for(j=2;j<i;j++)
        {
            if(isPrime(j)&&isPrime(i-j))
            {
                printf("%d=%d+%d\n",i,j,i-j);
                break;
            }
        }
    }
}