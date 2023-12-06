/*1算算是第几天？（10分）
题目内容：

给定一个日期，数据格式为YYYY-MM-DD，输出这个日期是该年的第几天。

提示:一年十二个月每个月的天数可以作为一维数组的元素



输入格式:

输入代表这个日期的年月日信息,scanf语句中的格式控制串为: "%d-%d-%d"



输出格式：

输出是当年的第几天 printf中的格式控制串为 "%d\n"



输入样例：

2018-9-11



输出样例：

254*/
// #include <stdio.h>
// int main()
// {
//     int year, month, day;
//     scanf("%d-%d-%d", &year, &month, &day);
//     int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//闰年
//         a[1] = 29;
//     int sum = 0;
//     for (int i = 0; i < month - 1; i++)
//     {
//         sum += a[i];
//     }
//     sum += day;
//     printf("%d\n", sum);
//     return 0;
// }

/*2生成指定的数列（10分）
题目内容：

编写程序：编写函数fun，求出a到b之内能被7或者11整除，但不能同时被7和11整除的所有正数，并将他们放在数组中，
函数返回这些数的个数。编写main函数，定义一个整型数组,可容纳1000个元素,定义整型变量a,b,输入a，b的值(输入时a小于等于b)并调用函数fun进行求解,最后在main函数中输出所有符合条件的元素。

提示: fun的函数原型为: int fun(int a,int b,int r[ ] );  其中的r用于存放a,b之间满足条件的所有元素

输入格式:

输入表示范围的两个整数a和b（a<b）

scanf的格式控制串为 "%d%d"



输出格式：

输出满足条件的所有元素

输出每个元素时用格式串"%d", 不同元素间以一个空格分隔,但是最后一个元素之后没有空格,输出后直接换行



输入样例：

1 20



输出样例：

7 11 14*/
// #include <stdio.h>
// int fun(int a, int b, int r[])
// {
//     int i = 0;
//     for (int j = a; j <= b; j++)
//     {
//         if ((j % 7 == 0 || j % 11 == 0) && j % (7 * 11) != 0)
//         {
//             r[i] = j;
//             i++;
//         }
//     }
//     return i;
// }
// int main()
// {
//     int a, b;
//     int r[1000];
//     scanf("%d%d", &a, &b);
//     int n = fun(a, b, r);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", r[i]);
//         if (i != n - 1)
//             printf(" ");
//     }
//     printf("\n");
//     return 0;
// }

/*3求数组元素的平均值（10分）
题目内容：



定义一个含10个整型元素的一维数组,从键盘上输入10个元素值,求去掉最大值和最小值之后的元素平均值.





输入格式:



用循环控制依次输入10个元素值,scanf语句中的格式控制串为: "%d"



输出格式：

输出平均值, printf中的格式控制串为 "%lf\n"



输入样例：

2 3 4 5 6 2 4 6 4 3



输出样例：

3.833333*/
#include <stdio.h>
int main()
{
    int a[10];
    int countmax = 0, countmin = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
        sum += a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == max)
        {
            countmax++;
        }
        if (a[i] == min)
        {
            countmin++;
        }
    }
    printf("%lf\n", (double)(sum - countmax * max - countmin * min) / (10 - countmax - countmin));
    return 0;
}