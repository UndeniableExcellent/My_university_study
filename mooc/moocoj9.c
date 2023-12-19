/*1带参宏替换计算给定年份的二月天数（10分）
题目内容：
定义一个带参数的宏DAYS_FEB(year)，以计算给定年份year的二月共有几天。
输入格式:
输入一个有效的年份
输出格式：
请用以下格式字符串输出："days of the FEB.: %d\n"
输入样例：
2016
输出样例：
days of the FEB.: 29*/
#include <stdio.h>
#define DAYS_FEB(year) (((year) % 4 == 0 && (year) % 100 != 0 || (year) % 400 == 0) ? 29 : 28)
int main()
{
    int year;
    scanf("%d", &year);
    printf("days of the FEB.: %d\n", DAYS_FEB(year));
    return 0;
}