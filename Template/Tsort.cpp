#include <iostream>
#include <string.h>
using namespace std;
//实现通用对数组进行排序的函数
//从大到小 选择排序

template<typename T>
void mySwap(T &a,T &b)//swap有一个库函数，不要重名
{
    T temp=a;
    a=b;
    b=temp;
}
template<typename T>
void mySort(T arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int max=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[max])
            {
                max=j;//记录最大值的下标
            }
        }
        if(max!=i)//如果最大值的下标不是i，交换
        {
            mySwap(arr[i],arr[max]);
        }
    }
}

template<typename T>
void printArray(T arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void test01()
{
    //测试char数组
    char arr[]="badcfe";
    int len = sizeof(arr)/sizeof(arr[0]);
    mySort(arr,len);
    printArray(arr,len);
    // mySort(arr,strlen(arr));
    // printArray(arr,strlen(arr));
}

void test02()
{
    //测试int数组
    int arr[]={-1,8,0,2,9,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    mySort(arr,len);
    printArray(arr,len);
    //mySort(arr,sizeof(arr)/sizeof(arr[0]));
    //printArray(arr,sizeof(arr)/sizeof(arr[0]));
}

int main()
{
    test01();
    test02();
    return 0;
}