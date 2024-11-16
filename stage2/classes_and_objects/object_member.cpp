#include <iostream>
#include <string>
using namespace std;
// 类对象作为类成员
// C++类中的成员可以是另一个类的对象，我们称该成员为 对象成员
class Phone
{
public:
    Phone(string pName)
    {
        m_PName = pName;
        cout << "Phone的构造调用" << endl;
    }
    ~Phone()
    {
        cout<<"Phone的析构调用"<<endl;
    }
    string m_PName;
};

class Person
{
public:
    string m_name;
    Phone m_phone;

public:
    // Phone m_phone = pName;//隐式转换法
    Person(string name, string pName) : m_name(name), m_phone(pName)
    {
        cout << "Person的有参构造调用" << endl;
    }
    ~Person(){
        cout << "Person的析构调用" << endl;
    }
};

void test01()
{
    Person p("张三", "华为");
    cout << p.m_name << " " << p.m_phone.m_PName << endl;
}

int main()
{
    test01(); // 当其他类对象作为本类成员，构造时候先构造类对象，在构造自身，//析构顺序相反
    return 0;
}