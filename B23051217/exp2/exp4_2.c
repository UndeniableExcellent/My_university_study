#include <stdio.h>
//巧用函数调用，打印不同行数和字符构成的等腰三角形。
//具体要求：定义一个函数原型void DrawTriangle (int n,char c); ，
//实现功能为打印一个n行的由字符c组成的等腰三角形。主程序调用该函数，实现打印5行“ '* ' ”、10行“ '# ' ”的等腰三角形。

void DrawTriangle(int n,char c)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    char c;
    //printf("请输入行数：");
    scanf("%d",&n);
    //printf("请输入字符：");
    scanf(" %c",&c);
    DrawTriangle(n,c);
    return 0;
}