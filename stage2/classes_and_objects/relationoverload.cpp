#include <iostream>
#include <string>
using namespace std;
//关系运算符重载
class Person
{
public:
    string m_Name;
    int m_Age;
    Person(string name, int age)
        {
            this->m_Name = name;
            this->m_Age = age;
        }
    //重载==号
    bool operator==(const Person &p)
    {
        if(this->m_Age == p.m_Age && this->m_Name == p.m_Name)
        {
            return true;
        }
        return false;
    }
};

void test01()
{
    Person p1("张三", 18);
    Person p2("张三", 18);
    if(p1 == p2)
    {
        cout << "p1和p2相等" << endl;
    }
    else
    {
        cout << "p1和p2不相等" << endl;
    }
}

int main()
{
    test01();
    return 0;
}