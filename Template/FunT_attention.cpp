#include <iostream>
using namespace std;
//函数模版注意事项
/*自动类型推导，必须推导出一致的数据类型T,才可以使用
模板必须要确定出T的数据类型，才可以使用*/
//使用模板时必须确定出通用数据类型T，并且能够推导出一致的类型
template<class T> //typename可以替换为class
void mySwap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c='c';
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //mySwap(c, b);//自动类型推导，必须推导出一致的数据类型，才可以使用

}

template <class T>
void func()
{
    cout << "func调用" << endl;
}

void test02()
{
    func<int>(); //显式指定类型，告诉编译器，我就是要调用这个函数模板，编译器就不会报错了。
    //func();
}

int main()
{
    test01();
    test02();
    return 0;
}