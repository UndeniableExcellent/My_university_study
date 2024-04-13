#include <iostream>
#include <string>
using namespace std;
/*1.3.8 类模板与友元
学习目标：

掌握类模板配合友元函数的类内和类外实现
全局函数类内实现 - 直接在类内声明友元即可

全局函数类外实现 - 需要提前让编译器知道全局函数的存在*/
template<class T1,class T2>class Person;//类模版声明
template<class T1,class T2>void printPerson(Person<T1,T2>&p);//要把友元函数声明写在前面
template <class T1, class T2>
class Person
{
    friend void printPerson<>(Person<T1, T2> &p);//printPerson是一个普通函数，<>模版
public:
    Person(T1 name, T2 age) : m_Name(name), m_Age(age) {}

private:
    T1 m_Name;
    T2 m_Age;
};

template <class T1, class T2>
void printPerson(Person<T1, T2> &p)
{
    cout << "Name:" << p.m_Name << endl;
    cout << "Age:" << p.m_Age << endl;
}

void test01()
{
    Person<string, int> p("Tom", 20);
    printPerson(p);
}
int main()
{
    test01();
    return 0;
}