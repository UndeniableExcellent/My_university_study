#include <iostream>
#include <string>
using namespace std;

/*
生活中你的家有客厅(Public)，有你的卧室(Private)
客厅所有来的客人都可以进去，但是你的卧室是私有的，也就是说只有你能进去
但是呢，你也可以允许你的好闺蜜好基友进去。
在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
友元的目的就是让一个函数或者类 访问另一个类中私有成员
友元的关键字为  ==friend==
友元的三种实现

* 全局函数做友元
* 类做友元
* 成员函数做友元*/


//全局函数作友元
// class Building
// {
//     friend void goodGay(Building &building);//函数声明前加friend关键字

// private:
//     string m_BedRoom;

// public:
//     string m_SittingRoom;

// public:
//     Building()
//     {
//         m_BedRoom = "卧室";
//         m_SittingRoom = "客厅";
//     }
// };

// // 全局函数
// void goodGay(Building &building) // 定义全局函数，参数为指向Building的指针变量building。
// {
//     cout << "好基友正在访问：" << building.m_SittingRoom << endl;
//     cout << "好基友正在访问：" << building.m_BedRoom << endl;
// }

// void test01()
// {
//     Building building; // 创建Building对象building。
//     goodGay(building); // 调用goodGay函数，将building作为参数传递。
// }

// int main()
// {
//     test01();
//     return 0;
// }

//类友元
// class Building;//先声明一个类
// class GoodGay
// {
// public:
//     Building *building; // 声明指向Building的指针变量building。
//     GoodGay();
//     ~GoodGay();
//     void visit();//参观函数，访问Building中的属性
// };

// class Building
// {
//     friend class GoodGay;//在Building类中声明GoodGay类做友元
// public:
//     string m_SittingRoom;
// private:
//     string m_BedRoom;
// public:
//     Building();
// };

// //类外写构造函数
// Building::Building()
// {
//     this->m_SittingRoom = "客厅";
//     this->m_BedRoom = "卧室";
// }
// GoodGay::GoodGay()
// {
//     this->building = new Building; // 创建Building对象，并让building指向
// }
// //类外写析构函数
// GoodGay::~GoodGay()
// {
//     delete this->building; // 释放building指向的Building对象
//     this->building = NULL; // 将building置空
// }
// //类外写成员函数
// void GoodGay::visit()
// {
//     cout << "好基友正在访问：" << this->building->m_SittingRoom << endl;
//     cout << "好基友正在访问：" << this->building->m_BedRoom << endl;
// }


// void test01()
// {
//     GoodGay gg; // 创建GoodGay对象gg。
//     gg.visit(); // 调用visit函数，访问Building中的属性。
// }
// int main()
// {
//     test01();
//     return 0;
// }

//成员函数做友元
class Building;
class GoodGay
{
public:
    GoodGay();
    ~GoodGay();
    Building *building; // 声明指向Building的指针变量building。
    void visit();//参观函数，访问Building中的属性
    void visit2();//参观函数，不可以访问Building中的私有成员
};

class Building
{
    friend void GoodGay::visit();//成员函数做友元
public:
    string m_SittingRoom;//客厅
private:
    string m_BedRoom;//卧室
public:
    Building();

};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    this->building=new Building; // 创建Building对象，并让building指向
}
GoodGay::~GoodGay()
{
    delete this->building; // 释放building指向的Building对象f
    this->building = NULL; // 将building置空
}
void GoodGay::visit()
{
    cout <<"visit函数正在访问："<<this->building->m_SittingRoom<<endl;
    cout <<"visit函数正在访问："<<this->building->m_BedRoom<<endl;
}
void GoodGay::visit2()
{
    cout <<"visit2函数正在访问："<<this->building->m_SittingRoom<<endl;
    // cout <<"visit2函数正在访问："<<this->building->m_BedRoom<<endl; // 不可访问
}
void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();
    return 0;
}