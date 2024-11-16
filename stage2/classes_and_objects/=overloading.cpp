#include <iostream>
using namespace std;

/*#### 4.5.4 赋值运算符重载
c++编译器至少给一个类添加4个函数
1. 默认构造函数(无参，函数体为空)
2. 默认析构函数(无参，函数体为空)
3. 默认拷贝构造函数，对属性进行值拷贝
4. 赋值运算符 operator=, 对属性进行值拷贝
如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题*/

class Person
{
public:
    int *m_Age;

public:
    Person(int age)
    {
        m_Age = new int(age); // 在堆区开辟空间
    }
    ~Person()
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    }
    // 重载赋值运算符
    Person &operator=(Person &p)
    {
        // 编译器提供的是浅拷贝
        // this->m_Age = p.m_Age;
        // 深拷贝
        // 应该先判断是否有数据在堆区，如果有先释放干净然后再深拷贝
        if (this->m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        this->m_Age = new int(*p.m_Age);
        return *this;
    }
};

void test01()
{
    Person p1(18);
    cout << "p1的年龄为：" << *p1.m_Age << endl;
    Person p2(20);
    cout << "p2的年龄为：" << *p2.m_Age << endl;
    p2 = p1; // 赋值操作//简单的值拷贝会使两个指针指向同一块地址，重复释放出错，应该用深拷贝
    cout << "p2的年龄为：" << *p2.m_Age << endl;
    Person p3(30);
    p3 = p2 = p1; // 连续赋值操作，连续调用赋值运算符重载函数
    cout << "p3的年龄为：" << *p3.m_Age << endl;
    cout << "p2的年龄为：" << *p2.m_Age << endl;
}

int main()
{
    test01();
    int a = 10;
    int b = 20;
    int c = 30;
    c = b = a;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    return 0;
}