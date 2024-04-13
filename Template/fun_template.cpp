#include <iostream>
using namespace std;
// 函数模版

/*1 模板
1.1 模板的概念
模板就是建立通用的模具，大大提高复用性
模板的特点：
模板不可以直接使用，它只是一个框架
模板的通用并不是万能的
1.2 函数模板
C++另一种编程思想称为 泛型编程 ，主要利用的技术就是模板

C++提供两种模板机制:函数模板和类模板

1.2.1 函数模板语法
函数模板作用：
建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表。
语法：
template<typename T>
函数声明或定义
解释：
template --- 声明创建模板
typename --- 表面其后面的符号是一种数据类型，可以用class代替
T --- 通用的数据类型，名称可以替换，通常为大写字母*/
// 两个整型交换函数
void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};

// 两个浮点型交换函数
void swapFloat(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

template <typename T> // 声明一个模版，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    // 利用函数模版交换
    // 1.自动类型推导
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //显示指定类型
    mySwap<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    test01();
    return 0;
}