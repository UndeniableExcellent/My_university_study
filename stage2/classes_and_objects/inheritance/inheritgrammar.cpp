#include <iostream>
using namespace std;

//普通实现界面
//Java界面
// class Java
// {
//     public:
//     void header()
//     {
//         cout <<"首页、公开课、登录、注册...(公共头部)"<<endl;
//     }
//     void footer()
//     {
//         cout<<"帮助中心、交流合作、站内地图...(公共底部)"<<endl;
//     }
//     void left()
//     {
//         cout<<"Java、Python、C++...(课程分类列表)"<<endl;
//     }
//     void content()
//     {
//         cout<<"Java课程内容"<<endl;
//     }
// };

// class Python
// {
//     public:
//     void header()
//     {
//         cout <<"首页、公开课、登录、注册...(公共头部)"<<endl;
//     }
//     void footer()
//     {
//         cout<<"帮助中心、交流合作、站内地图...(公共底部)"<<endl;
//     }
//     void left()
//     {
//         cout<<"Java、Python、C++...(课程分类列表)"<<endl;
//     }
//     void content()
//     {
//         cout<<"Python课程内容"<<endl;
//     }
// };

// class Cpp
// {
//     public:
//     void header()
//     {
//         cout <<"首页、公开课、登录、注册...(公共头部)"<<endl;
//     }
//     void footer()
//     {
//         cout<<"帮助中心、交流合作、站内地图...(公共底部)"<<endl;
//     }
//     void left()
//     {
//         cout<<"Java、Python、C++...(课程分类列表)"<<endl;
//     }
//     void content()
//     {
//         cout<<"C++课程内容"<<endl;
//     }
// };

//继承实现
/***总结：**

继承的好处：==可以减少重复的代码==

class A : public B; 

A 类称为子类 或 派生类

B 类称为父类 或 基类


**派生类中的成员，包含两大部分**：

一类是从基类继承过来的，一类是自己增加的成员。

从基类继承过过来的表现其共性，而新增的成员体现了其个性。*/
class BasePage
{
    public:
    void header()
    {
        cout <<"首页、公开课、登录、注册...(公共头部)"<<endl;
    }
    void footer()
    {
        cout<<"帮助中心、交流合作、站内地图...(公共底部)"<<endl;
    }
    void left()
    {
        cout<<"Java、Python、C++...(课程分类列表)"<<endl;
    }
};
class Java:public BasePage
{
    public:
    void content()
    {
        cout<<"Java课程内容"<<endl;
    }
};
class Python: public BasePage
{
    public:
    void content()
    {
        cout<<"Python课程内容"<<endl;
    }
};
class Cpp: public BasePage
{
    public:
    void content()
    {
        cout<<"C++课程内容"<<endl;
    }
};

void test01()
{
    Java j;
    j.header();
    j.footer();
    j.left();
    j.content();
    cout<<"--------------------"<<endl;
    Python p;
    p.header();
    p.footer();
    p.left();
    p.content();
    cout<<"--------------------"<<endl;
    Cpp c;
    c.header();
    c.footer();
    c.left();
    c.content();
    cout<<"--------------------"<<endl;
}

int main()
{
    test01();
    return 0;
}