/*1十进制转换十六进制（10分）
题目内容：
编写程序，
输入一个长整型数，将其转换为十六进制，以字符串形式输出。（提示：可以定义char s[]="0123456789ABCDEF"以帮助输出十六进制字符）。
输入格式:
一个长整型数
输出格式：
一个十六进制数
输入样例：
10
输出样例：
A*/

// #include<stdio.h>
// int main()
// {
//     long long int a;
//     scanf("%lld",&a);
//     char s[]="0123456789ABCDEF";
//     char b[100];
//     int i=0;
//     while(a!=0)
//     {
//         b[i]=s[a%16];//借助s[]数组，将十进制数转换为十六进制数，并保存在b[]数组中。
//         a=a/16;
//         i++;
//     }
//     b[i]='\0';
//     for(int j=i-1;j>=0;j--)
//     {
//         printf("%c",b[j]);
//     }
//     printf("\n");
//     return 0;
// }


/*2字符串过滤（10分）
题目内容：
输入一个字符串，过滤掉所有的非数字字符，得到由数字字符组成的字符串，并输出。
输入格式:
一个字符串
输出格式：
去掉非数字字符的字符串
输入样例：
1ar56
输出样例：
156*/
#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int i=0,j=0;
    while(a[i]!='\0')
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            a[j]=a[i];
            j++;
        }
        i++;
    }
    a[j]='\0';
    printf("%s",a);
    return 0;
}