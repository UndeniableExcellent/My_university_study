#include <iostream>
using namespace std;
// C++对象模型和this指针

/*#### 4.3.1 成员变量和成员函数分开存储

在C++中，类内的成员变量和成员函数分开存储

只有非静态成员变量才属于类的对象上*/
//空对象sizeof为1
class Person
{
public:
    // 非静态成员变量//属于类的对象上
    int m_A;
    static int m_B;//静态成员变量//不属于类的对象上
    void func()//非静态成员函数不属于类对象
    {
        ;
    }
    static void funcStatic(){}//静态成员函数不属于类对象
};

void test01()
{
    Person p1;
    // 空对象占用内存空间
    // c++编译器会给每一个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址
    cout << "size of p1:" << sizeof(p1) << endl;
}
void test02()
{
    Person p2;
    cout<< "size of p2:" << sizeof(p2) << endl;
}

int main()
{
    //test01();
    test02();
    return 0;
}