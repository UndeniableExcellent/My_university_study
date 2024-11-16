#include <iostream>
using namespace std;
/*#### 4.6.8 菱形继承
**菱形继承概念：**

​	两个派生类继承同一个基类

​	又有某个类同时继承者两个派生类

​	这种继承被称为菱形继承，或者钻石继承*/

/***菱形继承问题：**
1.     羊继承了动物的数据，驼同样继承了动物的数据，当草泥马使用数据时，就会产生二义性。

2.     草泥马继承自动物的数据继承了两份，其实我们应该清楚，这份数据我们只需要一份就可以。*/
class Animal
{
public:
    int m_Age; // 动物的年龄
};
// virtual 虚继承
//  羊类
class Sheep : virtual public Animal
{
};
// 驼类
class Camel : virtual public Animal
{
};
// 羊驼类
class Alpaca : public Sheep, public Camel
{
};
// 利用虚继承解决菱形继承问题
// 继承之前加上关键字virtual变成虚继承
// Animal类称为虚基类
// 虚继承继承了两个指针，这两个指针通过偏移量找到唯一的数据
// vb ptr --vb table
// v-virtual   b-base   ptr - pointer

void test01()
{
    Alpaca a;
    // a.m_Age = 10; // 不明确
    a.Sheep::m_Age = 18;
    a.Camel::m_Age = 20; // 共用一份数据
    // 当菱形继承，两个父类有相同数据，需要加以作用域区分
    //  cout << "a的年龄为：" << a.m_Age << endl;
    cout << "a.Sheep::m_Age = " << a.Sheep::m_Age << endl;
    cout << "a.Camel::m_Age = " << a.Camel::m_Age << endl;
    cout << "a.m_Age = " << a.m_Age << endl;
    // 这份数据只要有一份就可以，菱形继承两份，资源浪费
    cout << "sizeof(a) = " << sizeof(a) << endl;              // 24//两个指针16，还有一个int,内存对齐最终24
    cout << "sizeof(Sheep) = " << sizeof(Sheep) << endl;      // 16//一个指针，一个int,内存对齐总共16
    cout << "sizeof(Camel) = " << sizeof(Camel) << endl;      // 16
    cout << "sizeof(Alpaca) = " << sizeof(Alpaca) << endl;    // 24
    cout << "sizeof(Animal) = " << sizeof(Animal) << endl;    // 4
    cout << "sizeof(Animal*) = " << sizeof(Animal *) << endl; // 8
}
int main()
{
    test01();
    return 0;
}