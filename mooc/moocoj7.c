/*1数列移位
题目内容：

有数组其10个元素值依次是：｛1 2 3 4 5 6 7 8 9 10｝，现在将前面各数顺序向后移动m个位置，最后m个数变成最前面m个数，并输出。
（编程提示：定义函数，实现每次数组往后移动一个元素，最后一个放到数组前面，这样调用m次即可实现数组后移m个数）
输入格式:

输入移动的次数m,scanf的格式串为"%d"

假设输入的m的值在闭区间[1,10]之间，程序中不再用选择或循环结构来处理输入部分。

输出格式：

依次输出移动后所有的元素

循环控制输出每个元素,printf中的格式串为"%3d"

输出最后一个元素后用printf("\n");进行换行处理。



输入样例：

3

输出样例：

  8  9 10  1  2  3  4  5  6  7*/
// #include<stdio.h>
// void move(int a[],int m,int len)
// {
//     int i,j,temp;
//     for(i=0;i<m;i++)
//     {
//         temp=a[len-1];
//         for(j=len-1;j>0;j--)
//         {
//             a[j]=a[j-1];
//         }//后移
//         a[0]=temp;
//     }
// }
// int main()
// {
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int i,m,len=10;
//     scanf("%d",&m);
//     move(a,m,len);
//     for(i=0;i<10;i++)
//     {
//         printf("%3d",a[i]);
//     }
//     printf("\n");
//     return 0;
// }

/*2交换法排序（10分）
题目内容：

从键盘输入n个（n≤10）整数，用交换法进行排序（非递减有序），结果输出排序后的序列。说明：交换法排序用函数实现，函数原型为：void sort(int *a,int n);  
交换法排序的基本思想是：n个元素共需要n-1趟，其中第i（从0变化至n-2）趟的任务是找出本趟中最小的元素放在下标为i的位置上，
每趟通过从i+1到n-1下标的元素逐个与i下标元素比较及时交换进行排序。
输入格式:
先输入n的值，再用循环输入n个数组元素，输入每个整数用的格式控制串都是"%d"

说明：输入n时假定输入的值一定在闭区间[1,10]之内，不需要用分支或循环结构对输入n的值再进行判断。

输出格式：
输出交换后的序列，单个元素输出时printf中使用的格式串为"%d  " （请在程序中直接复制这个格式串）

所有元素输出结束后用printf("\n"); 进行换行处理。

输入样例：

9

5 6 3 8 23 90 12 34 25
输出样例：
3  5  6  8  12  23  25  34  90*/
// #include <stdio.h>
// void sort(int *arr,int n)
// {
//     int i,j,index,temp;
//     for(i=0;i<n-1;i++)
//     {
//         index=i;
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[index])
//             {
//                 index=j;//找到最小值的下标index
//             }
//         }
//         if(index!=i)
//         {
//             temp=arr[i];
//             arr[i]=arr[index];
//             arr[index]=temp;//交换最小值
//         }
//     }
// }
// int main()
// {
//     int n,i,arr[10];
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     sort(arr,n);
//     for(i=0;i<n;i++)
//     {
//         printf("%d  ",arr[i]);
//     }
//     return 0;
// }

/*3编写函数同时求两个整数的和与差（10分）
题目内容：
主函数已经给定,请补齐程序,使函数SumDiff完成求两个整数的和与差(函数返回和值,差值通过设定指针形式参数通过间接引用进行计算),提交完整的程序代码
主函数代码如下：

int main( )
{ 
    int a,b,sum,dif;
    scanf("%d%d",&a,&b);
    sum=SumDiff(a,b,&dif);
    printf("sum=%d, difference=%d\n",sum,dif);
    return 0;
}
输入格式:
主函数已经给定输入语句
输出格式：
主函数已经给定输出语句
输入样例：

2   3

输出样例：

sum=5, difference=-1*/
#include <stdio.h>
int SumDiff(int a,int b,int *dif)
{
    *dif=a-b;
    return a+b;
}
int main( )
{ 
    int a,b,sum,dif;
    scanf("%d%d",&a,&b);
    sum=SumDiff(a,b,&dif);
    printf("sum=%d, difference=%d\n",sum,dif);
    return 0;
}