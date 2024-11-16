#include <iostream>
using namespace std;
// 类模版中的成员函数
/*类模板中成员函数和普通类中成员函数创建时机是有区别的：

普通类中的成员函数一开始就可以创建
类模板中的成员函数在调用时才创建*/
class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1 show" << endl;
    }
};
class Person2
{
public:
    void showPerson2()
    {
        cout << "Person2 show" << endl; // 输出 "Person2 show
    }
};
template <class T>
class MyClass
{
public:
    T obj;
    void fun1() { obj.showPerson1(); }
    void fun2() { obj.showPerson2(); }
};
void test01()
{
    MyClass<Person1> mc1;
    mc1.fun1(); // 输出 "Person1 show"
    //mc1.fun2(); // 编译错误，找不到showPerson2
}
int main()
{
    test01();
    return 0;
}