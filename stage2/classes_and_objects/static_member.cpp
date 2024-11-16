#include <iostream>
using namespace std;
/*静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
静态成员分为：
*  静态成员变量
   *  所有对象共享同一份数据
   *  在编译阶段分配内存
   *  类内声明，类外初始化
*  静态成员函数
   *  所有对象共享同一个函数
   *  静态成员函数只能访问静态成员变量//无法区分到底是哪个对象的成员变量*/

class Person
{
public:
    Person(/* args */){};
    ~Person(){};
    //静态成员函数
    static void func(){
        //静态成员函数内部只可以访问静态成员变量
        m_Age = 100;
        //m_Height = 180;//静态成员函数不能访问非静态成员变量
        cout<<"func()"<<endl;
    }
    //静态成员变量
    static int m_Age; //静态成员变量//所有对象都共享一份数据
    int m_Height; //非静态成员变量//每个对象都有自己的数据
};
int Person::m_Age = 100;//类外初始化
void test01()
{
    Person p1;
    cout<<"p1.m_Age="<<p1.m_Age<<endl;
    Person p2;
    p2.m_Age = 200;
    cout<<"p2.m_Age="<<p2.m_Age<<endl;
    cout<<"p1.m_Age="<<p1.m_Age<<endl;//p1和p2共享同一份数据，
}

void test02()
{
    //静态成员变量不属于某一个对象，所有对象共享一份数据
    //因此静态成员变量有两种访问方式
    //1.通过对象访问：对象.静态成员变量名
    Person p1;
    cout<<"p1.m_Age="<<p1.m_Age<<endl;
    //2.通过类名访问：类名.静态成员变量名
    cout<<"Person.m_Age="<<Person::m_Age<<endl;
}
void test03()
{
    //访问静态成员函数
    //通过对象访问
    Person p1;
    p1.func();
    //通过类名访问
    Person::func();
}
int main()
{
    test01();
    test02();
    /*静态成员变量和静态成员函数只有一点不同，就是静态成员函数只能访问静态成员变量*/
    test03();
    cout<<"Person.m_Age="<<Person::m_Age<<endl;
    return 0;
}