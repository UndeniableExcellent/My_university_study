/*编写程序exp7_3.c，从键盘读入一个字符串，
去掉其中所有的空格得到一个新串后再输出
（只能定义一个字符数组，不可以定义两个字符数组，可以根据编程需要定义字符指针以及其他变量）。*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    char *p,*q;
    printf("input a string:\n");
    gets(str);
    p = str;
    q=str;
    while (*p != '\0')
    {
        if (*p != ' ')
        {
            *q++ = *p++;
        }
        else
            p++;
    }
    *q='\0';
    printf("the new string is:\n");
    puts(str);
    printf("\n");
    return 0;
}