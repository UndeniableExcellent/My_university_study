#include <iostream>
using namespace std;
/*
继承的语法：`class 子类 : 继承方式  父类`
**继承方式一共有三种：**
* 公共继承
* 保护继承
* 私有继承*/

class Base1
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son1 : public Base1//公共继承
{
public:
    void func()
    {
        m_A = 10; // 公共继承，基类的公共成员，在派生类中仍然为公共成员
        m_B = 10; // 公共继承，基类的保护成员，在派生类中仍然为保护成员
        // m_C = 10; // 私有的，不能在派生类中直接访问
    }
};

void test01()
{
    Son1 s1;
    s1.m_A = 10;//公共权限
    //s1.m_B = 10;//保护权限，类外不能访问
    // s1.m_C = 10;
}

class Base2
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};
class Son2 : protected Base2//保护继承
{
public:
    void func()
    {
        m_A = 10; // 保护继承，基类的公共成员，在派生类中变为保护成员
        m_B = 10; // 保护继承，基类的保护成员，在派生类中变为保护成员
        // m_C = 10; // 私有的，不能在派生类中直接访问
    }
};

void test02()
{
    Son2 s2;
    //s2.m_A = 10;//保护权限
    //s2.m_B = 10;//保护权限
    //s2.m_C = 10;
}

class Base3
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};
class Son3 : private Base3//私有继承
{
public:
    void func()
    {
        m_A = 10; // 私有继承，基类的公共成员，在派生类中变为私有的
        m_B = 10; // 私有继承，基类的保护成员，在派生类中变为私有的
        // m_C = 10; // 私有的，不能在派生类中直接访问
    }
};

class GrandSon3 : public Son3//基类是private的，只能单继承，不能多继承
{
public:
    void func()
    {
        //m_A = 10; // 私有
        //m_B = 10; // 私有
        // m_C = 10; // 私有的，不能在派生类中直接访问
    }
};
void test03()
{
    Son3 s3;
    //s3.m_A = 10;//私有权限
    //s3.m_B = 10;
    //s3.m_C = 10;
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}