#include <iostream>
using namespace std;
/*#### 4.6.7 多继承语法
C++允许**一个类继承多个类**
语法：` class 子类 ：继承方式 父类1 ， 继承方式 父类2...`
多继承可能会引发父类中有同名成员出现，需要加作用域区分
**C++实际开发中不建议用多继承***/
class Base1
{
public:
    int m_A;
    Base1()
    {
        m_A = 100;
    }
};
class Base2
{
public:
    int m_A;
    Base2()
    {
        m_A = 200;
    }
};
// 子类继承Base1和Base2
// 语法：class 子类: 继承方式 父类1,继承方式 父类2...
class Son : public Base1, public Base2
{
public:
    int m_C;
    int m_D;
    Son()
    {
        m_C = 300;
        m_D = 400;
    }
};
void test01()
{
    Son s;
    cout << "sizeof(Son)" << sizeof(s) << endl; // 16
    // cout << "s.m_A:" << s.m_A << endl;//父类有重名m_A重名//父类中出现同名成员，需要加作用域区分
    cout << "s.Base1::m_A:" << s.Base1::m_A << endl; // 100
    cout << "s.Base2::m_A:" << s.Base2::m_A << endl; // 200
}

int main()
{
    test01();
    return 0;
}