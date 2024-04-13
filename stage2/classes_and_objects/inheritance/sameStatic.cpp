#include <iostream>
using namespace std;
class Base
{
public:
    static int m_A;
    static void func()//静态成员函数
    {
        cout << "Base::func()" << endl;
    }
    static void func(int a)//静态成员函数可以有参数，但只能访问静态成员变量
    {
        cout << "Base::func(int a)" << endl;
    }
};
int Base::m_A = 100; // 静态成员类内声明，类外初始化

class Son:public Base
{
public:
    static int m_A;
    static void func()//静态成员函数
    {
        cout << "Son::func()" << endl;
    }
};
int Son::m_A = 200;
void test01()
{
    Son s;
    cout <<"通过对象访问"<<endl;
    cout << "s.m_A = " << s.m_A << endl;
    cout << "s.Base::m_A = " << s.Base::m_A << endl;
    cout << "通过类名访问" << endl;
    cout << "Son::m_A = " << Son::m_A << endl; // 子类同名静态成员变量
    cout <<"Son::Base::m_A = " << Son::Base::m_A << endl;//第一个::代表通过类名方式访问,第二个::代表访问父类作用域
}
void test02()
{
    Son s;
    cout <<"通过对象访问"<<endl;
    s.func();//通过对象访问
    s.Base::func();//通过对象访问
    cout <<"通过类名访问静态成员函数" << endl;
    Son::func();//通过类名访问
    Son::Base::func();//通过类名访问
    Son::Base::func(10);//通过类名访问
}
int main()
{
    test01();
    test02();
    return 0;
}