#include <iostream>
using namespace std;

// 继承中同名成员处理
/*#### 4.6.5 继承同名成员处理方式
问题：当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？
* 访问子类同名成员   直接访问即可
* 访问父类同名成员   需要加作用域*/
/*总结：

1. 子类对象可以直接访问到子类中同名成员
2. 子类对象加作用域可以访问到父类同名成员
3. 当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数*/
class Base
{
public:
    int m_A;
    Base()
    {
        m_A = 100;
    }
    void func()
    {
        cout << "Base::func()" << endl;
    }
    void func(int a)
    {
        cout << "Base::func(int a)" << endl;
    }

};
class Son : public Base
{
public:
    int m_A; // 隐藏父类的m_A
    Son()
    {
        m_A = 200;
    }
    void func()
    {
        cout << "Son::func()" << endl;
    }
};
void test01()
{
    Son s;
    cout << "s.m_A = " << s.m_A << endl;
    cout << "s.Base::m_A = " << s.Base::m_A << endl;//如果通过子类访问父类同名对象，需要加作用域
}
void test02()
{
    Son s;
    s.func(); // 直接访问子类同名成员函数
    s.Base::func(); // 加作用域访问父类同名成员函数
    //s.func(10); // 同名成员函数，子类会隐藏父类中所有同名成员函数，包括重载函数
    s.Base::func(10);
}
int main()
{
    test01();
    test02();
    return 0;
}