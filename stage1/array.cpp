#include <iostream>
using namespace std;
// int main()
// {

//     // 数组名用途
//     // 1、可以获取整个数组占用内存空间大小
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;
//     cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;
//     cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

//     // 2、可以通过数组名获取到数组首地址
//     cout << "数组首地址为： " << (long long)arr << endl;//(long long)arr是强制类型转换，将十六进制地址类型转换为long long类型
//     cout << "数组中第一个元素地址为： " << &arr[0] << endl;
//     cout << "数组中第二个元素地址为： " << &arr[1] << endl;

//     // arr = 100; 错误，数组名是常量，因此不可以赋值
//     //system("pause");
//     // cin.get();
//     // cin.get();
//     return 0;
// }

//冒泡排序
void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int com(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}

// int main()
// {
//     int arr[]={5,4,3,2,1};
//     //bubbleSort(arr,5);
//     qsort(arr,5,sizeof(int),com);
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//二维数组
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    cout<<"二维数组内存空间大小为："<<sizeof(arr)<<endl;
    cout<<"二维数组第一行内存空间大小为："<<sizeof(arr[0])<<endl;
    cout<<"二维数组元素个数为："<<sizeof(arr)/sizeof(arr[0][0])<<endl;
    cout<<"二维数组行数"<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"二维数组列数"<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
    cout<<"二维数组首地址"<<&arr<<endl;
    cout<<"二维数组第一行首地址"<<&arr[0]<<endl;
    cout<<"二维数组第一行第一列首地址"<<&arr[0][0]<<endl;
    return 0;
}