#include <iostream>
using namespace std;

/*调用规则如下：
如果函数模板和普通函数都可以实现，优先调用普通函数
可以通过空模板参数列表来强制调用函数模板
函数模板也可以发生重载
如果函数模板可以产生更好的匹配,优先调用函数模板*/

//总结：既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性
void myPrint(int a, int b)
{
    cout <<"调用的普通函数" << endl;
}
template<typename T>
void myPrint(T a, T b)//函数重载
{
    cout <<"调用的函数模板" << endl;
}

template<typename T>
void myPrint(T a, T b,T c)
{
    cout<<"调用的重载函数模板"<<endl;
}
void test01()
{
    int a=10;
    int b=20;
    myPrint(10, 20);
    myPrint(10.5, 20.5);
    //通过空模板参数列表，强制调用函数模板
    myPrint<>(a,b);
    myPrint(a, b, a);//函数模板可以产生更好的匹配，优先调用函数模板
    char c='a';
    char d='b';
    myPrint(c,d);//函数模板
}

int main()
{
    test01();
    return 0;
}