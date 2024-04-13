#include <iostream>
using namespace std;
//继承中的构造和析构顺序
class Base
{
private:
    /* data */
public:
    Base(/* args */);
    ~Base();
};

Base::Base(/* args */)
{
    cout << "Base构造函数" << endl;
}

Base::~Base()
{
    cout << "Base析构函数" << endl;
}

class Son : public Base
{
private:
    /* data */
public:
    Son(/* args */);
    ~Son();
};

Son::Son(/* args */)
{
    cout << "Son构造函数" << endl;
}

Son::~Son()
{
    cout << "Son析构函数" << endl;
}

void test01()
{
    Son s;
    //先构造父类再构造子类，析构顺序相反
}
int main()
{
    test01();
    return 0;
}
