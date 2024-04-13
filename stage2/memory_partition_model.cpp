#include <iostream>
using namespace std;
// C++程序在执行时，将内存大方向划分为 4个区域
// - 代码区：存放函数体的二进制代码，由操作系统进行管理的
// - 全局区：存放全局变量和静态变量以及常量
// - 栈区：由编译器自动分配释放, 存放函数的参数值,局部变量等
// - 堆区：由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收

//全局变量
// int g_a=10;
// int g_b=20;
// int main()
// {
//     //全局区
//     //全局变量，静态变量，常量

//     //普通局部变量
//     int a=10;
//     int b=20;
//     cout<<"局部变量"<<endl;
//     cout<<(long long)&a<<endl;
//     cout<<(long long)&b<<endl;

//     cout<<"全局变量"<<endl;
//     cout<<(long long)&g_a<<endl;
//     cout<<(long long)&g_b<<endl;

//     static int s_a=10;
//     static int s_b=20;
//     cout<<"静态变量"<<endl;
//     cout<<(long long)&s_a<<endl;
//     cout<<(long long)&s_b<<endl;

//     cout<<"const修饰的局部常量"<<endl;//
//     const int c_a=10;
//     const int c_b=20;
//     cout<<(long long)&c_a<<endl;
//     cout<<(long long)&c_b<<endl;//栈区
//     return 0;
// }

//栈区
//注意不要返回局部变量的地址
//栈区数据由编译器管理开辟和释放

// int func(int a,int b)//形参在栈区
// {
//     //栈区
//     //函数的参数值
//     //局部变量
//     int ret=a+b;
//     return ret;
// }

//堆区
//由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
//在C++中主要利用new在堆区开辟内存
int* func()
{
	int* a = new int(10);
	return a;
}

int main() {

	int *p = func();

	cout << *p << endl;
	cout << *p << endl;
    
	system("pause");

	return 0;
}