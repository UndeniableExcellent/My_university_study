#include <iostream>
#include <string>
using namespace std;
/*1.3.4 类模板对象做函数参数
学习目标：

类模板实例化出的对象，向函数传参的方式
一共有三种传入方式：

指定传入的类型 --- 直接显示对象的数据类型
参数模板化 --- 将对象中的参数变为模板进行传递
整个类模板化 --- 将这个对象类型 模板化进行传递*/
template<class NameType,class AgeType=int>
class Person
{
    public:
    NameType m_Name;
    AgeType m_Age;
    Person(NameType name,AgeType age):m_Name(name),m_Age(age){}
    void ShowPerson()
    {
        cout <<"Name:"<<m_Name<<" Age:"<<m_Age<<endl;
    }
};
//1.指定传入的类型 
void printPerson1(Person<string,int> &p)
{
    p.ShowPerson();
}
void test01()
{
    Person<string,int>p("Tom",20);
    printPerson1(p);
}
//2.参数模板化
template<class T1,class T2>
void printPerson2(Person<T1,T2>&p)
{
    p.ShowPerson();
    cout<<"T1的类型为："<<typeid(T1).name()<<endl;
    cout<<"T2的类型为："<<typeid(T2).name()<<endl;
}
void test02()
{
    Person<string,int>p("Tom",20);
    printPerson2(p);
}
//3.整个类模板化
template<class T>
void printPerson3(T &p)
{
    p.ShowPerson();
    cout<<"T的类型为："<<typeid(T).name()<<endl;
}
void test03()
{
    Person<string,int>p("Tom",20);
    printPerson3(p);
}
int main()
{
    test01();
    test02();
    test03();
    return 0;
}