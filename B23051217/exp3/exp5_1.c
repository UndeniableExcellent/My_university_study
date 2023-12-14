/*编写程序exp5_1.c，在主函数中定义一维数组int array[10]，
自定义以下函数：输入数组元素，输出数组元素、求数组元素平均值、
输出数组元素最大值、输出数组元素最小值、查找某数值元素是否存在（若存在，请输出下标）、
给数组元素排序，要求在主函数中对各子函数进行调用和测试。*/
#include <stdio.h>
#include <stdlib.h>

void input(int array[], int n);     // 输入
void output(int array[], int n);    // 输出
double average(int array[], int n); // 平均值
int max(int array[], int n);        // 最大值
int min(int array[], int n);        // 最小值
void find(int array[], int n);      // 查找
void sort(int array[], int n);      // 排序

int main()
{
    int array[10];
    input(array, 10);
    output(array, 10);
    double ave = average(array, 10);
    int maxnum = max(array, 10);
    int minnum = min(array, 10);
    printf("平均值：%lf\n", ave);
    printf("最大值：%d\n", maxnum);
    printf("最小值：%d\n", minnum);
    find(array, 10);
    sort(array, 10);
    return 0;
}

void input(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("请输入第%d个数：", i + 1);
        scanf("%d", &array[i]);
    }
}

void output(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

double average(int array[], int n)
{
    int i, sum = 0;
    double ave;
    for (i = 0; i < n; i++)
    {
        sum += array[i];
    }
    ave = sum / (double)n;
    return ave;
}

int max(int array[], int n)
{
    int i, max = array[0];
    for (i = 1; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int min(int array[], int n)
{
    int i, min = array[0];
    for (i = 1; i < n; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

void find(int array[], int n)
{
    int i, num;
    printf("请输入要查找的数：");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (array[i] == num)
        {
            printf("第%d个数是%d\n", i + 1, num);
            break;
        }
    }
    if (i == n)
        printf("没有找到！\n");
}

void sort(int array[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("排序后：");
    output(array, n);
}