#include <iostream>
using namespace std;
/*1.3.5 类模板与继承
当类模板碰到继承时，需要注意一下几点：

当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
如果不指定，编译器无法给子类分配内存
如果想灵活指定出父类中T的类型，子类也需变为类模板*/

template<class T>
class Base
{
    T m;
};
//class Son:public Base//错误，缺少参数
class Son1:public Base<int>//必须指定一个类型
{

};
void test01()
{
    Son1 s1;
}
//类模版继承类模版，
template<class T1,class T2>//总结：如果父类是类模板，子类需要指定出父类中T的数据类型
class Son2:public Base<T2>
{
    public:
    Son2()//构造函数
    {
        cout <<typeid(T1).name() << endl;
        cout <<typeid(T2).name() << endl;
    }
};
void test02()
{
    Son2<int,char> s2;
}
int main()
{
    test01();
    test02();
    return 0;
}
