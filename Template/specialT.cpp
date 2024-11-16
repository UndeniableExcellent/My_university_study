#include <iostream>
#include <string>
using namespace std;
// 模板的局限性
// 有些特定的数据类型，需要用具体方法实现
class Person
{
public:
    string m_Name;
    int m_Age;
    Person(string name, int age) : m_Name(name), m_Age(age) {} // 构造函数初始化列表初始化成员变量，避免默认值
};
template <class T>
bool myCompare(T &a, T &b)
{
    if (a == b)
        return true;
    else
        return false;
}
//提供具体化的模版，具体化添加template<>
//具体化优先于常规模版
template<> bool myCompare(Person &a, Person &b)
{
    if (a.m_Name == b.m_Name && a.m_Age == b.m_Age)
        return true;
    else
        return false;
}

void test01()
{
    int a = 10;
    int b = 20;
    bool ret = myCompare(a, b);
    if (ret)
    {
        cout << "a==b" << endl;
    }
    else
    {
        cout << "a!=b" << endl;
    }
}

void test02()
{
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    bool ret = myCompare(p1, p2);
    if (ret)
    {
        cout << "p1==p2" << endl;
    }
    else
    {
        cout << "p1!=p2" << endl;
    }
}
int main()
{
    test01();
    test02();
    return 0;
}