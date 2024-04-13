#include <iostream>
using namespace std;

// new运算符
int main()
{
    // 在堆区创建整型数据
    // new返回的是该数据类型的指针
    int *p = new int(10);//()创建一个变量，这个变量的值为10
    cout << *p << endl;
    cout << p << endl;
    delete p;//delete运算符，释放堆区
    p = NULL; // 释放内存后，将指针设置为空，防止野指针

    //在堆区用new开辟数组
    int *arr = new int[10];//[]开辟数组，数组有10个元素
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //释放数组要加[]
    delete[] arr; // 释放数组内存
    arr = NULL; // 释放内存后，将指针设置为空，防止野指针
    return 0;
}