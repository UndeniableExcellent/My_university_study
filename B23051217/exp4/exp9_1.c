/*编写程序exp9_1.c ，从键盘读入一系列字符并以“#”结束，
将读入的字符（不包括#号）存入文本文件D:\f1.txt中，再从该文件读取内容，并在显示器上原样显示*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int i = 0;

    fp = fopen("D:\\f1.txt", "w");//以只写方式打开文件
    if (fp == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Enter a series of characters, end with #: \n");
    while ((ch = getchar()) != '#')
    {
        fputc(ch, fp);
    }

    fclose(fp);

    fp = fopen("D:\\f1.txt", "r");//以只读方式打开文件
    if (fp == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("The content in the file is:\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}