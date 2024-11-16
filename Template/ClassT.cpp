#include <iostream>
using namespace std;

//类模板
/*1.3.1 类模板语法
类模板作用：

建立一个通用类，类中的成员 数据类型可以不具体制定，用一个虚拟的类型来代表。
语法：

template<typename T>
类
解释：

template --- 声明创建模板

typename --- 表面其后面的符号是一种数据类型，可以用class代替

T --- 通用的数据类型，名称可以替换，通常为大写字母*/

template<class NameType, class AgeType=int>//默认参数int
class Person
{
    public:
        Person(NameType name, AgeType age):
        m_Name(name), m_Age(age){}
        void shwPerson()
        {
            cout << "Name = " << m_Name << " Age = " << m_Age << endl;
        }
    NameType m_Name;
    AgeType m_Age;
};

void test01()
{
    Person<string, int> p("Tom", 10);
    cout << "Name = " << p.m_Name << " Age = " << p.m_Age << endl;
    p.shwPerson();
}

/*1.3.2 类模板与函数模板区别
类模板与函数模板区别主要有两点：
类模板没有自动类型推导的使用方式
类模板在模板参数列表中可以有默认参数*/
/*类模板使用只能用显示指定类型方式
类模板中的模板参数列表可以有默认参数*/
void test02()
{
    Person <string> p("Jerry", 18);//类模板参数列表有默认参数
    p.shwPerson();
}
int main()
{
    test01();
    test02();
    return 0;
}