// #include <stdio.h>
// void SwapByAddress(int *px, int *py)
// {
//     int temp;
//     temp = *px;
//     *px = *py;
//     *py = temp;
//     printf("px = %d, py = %d\n", *px, *py);
// }
// void SwapByAddress2(int *px, int *py)
// {
//     int *temp;
//     temp = px;
//     px = py;
//     py = temp;
//     printf("px = %d, py = %d\n", *px, *py);//只是改变了指针变量指向的地址，地址存储数据没变--不能实现交换
// }
// int main()
// {
//     int x = 100, y = 200;
//     printf("x = %d, y = %d\n", x, y);
//     SwapByAddress2(&x, &y);
//     printf("x = %d, y = %d\n", x, y);
//     return 0;
// }

//输入一个整数，输出他在内存中的存储形式
#include <stdio.h>
// 显示内存中二进制存储形式
int *turntobinary(int m, int arr[])
{
    int i;
    int *p = arr + 31;
    if (m >= 0)
    {
        arr[0] = 0;
        while (m)
        {
            *p = m % 2;
            m = m / 2;
            p--;
        }
    }
    if (m < 0)
    {
        arr[0] = 1;
        while (m)
        {
            *p = m % 2;
            m = m / 2;
            p--;
        } // 求出负数的原码
        for (i = 1; i < 32; i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = 1;
            }
            else
            {
                arr[i] = 0;
            }
        } // 求出反码
        i = 31;
        while (arr[i] == 1)
        {
            arr[i] = 0;
            i--;
        }
        arr[i] = 1; // 求补码
    }
    return arr; // 返回二进制数组的地址，以便调用者进行打印输出
}
int main()
{
    int ret[32] = {0};
    int m;
    scanf("%d", &m);
    turntobinary(m, ret);
    for (int i = 0; i < 32; i++)
    {
        printf("%d", ret[i]);
    }
    return 0;
}