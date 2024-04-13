#include <iostream>
using namespace std;
// 加号运算符重载
// 作用：实现两个自定义数据类型的相加
//> 总结1：对于内置的数据类型的表达式的的运算符是不可能改变的

//> 总结2：不要滥用运算符重载

class Person
{
    friend Person operator+(const Person &p1, const Person &p2);
    friend Person operator+(const Person &p2, int val);
    friend Person operator+(int val, const Person &p);
    friend ostream &operator<<(ostream &cout, Person &p1);
public:
    Person(){};
    Person(int a, int b) : m_A(a), m_B(b) {}
    // 成员函数实现 + 号运算符重载
    Person operator+(const Person &p)
    {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
    // Person PersonAddPerson(Person& p)//把自定义函数的PersonAddPerson改成operator+就是运算符重载
    // {
    //     Person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;
    // }

    // 成员函数重载<<运算符
    // 一般不会用成员函数重载<<，因为无法实现cout在左边
    ostream &operator<<(ostream &cout) // 本质是p1.operator<<(cout),简化为p1<<cout,这里cout在右边
    {
        cout << "m_A = " << this->m_A << " m_B = " << this->m_B;
        return cout;
    }

private:
    int m_A;
    int m_B;
};

// 全局函数实现 + 号运算符重载
Person operator+(const Person &p1, const Person &p2)
{
    Person temp(0, 0);
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

// 运算符重载 可以发生函数重载
Person operator+(const Person &p2, int val)
{
    Person temp;
    temp.m_A = p2.m_A + val;
    temp.m_B = p2.m_B + val;
    return temp;
}
Person operator+(int val, const Person &p)
{
    Person temp;
    temp.m_A = p.m_A + val;
    temp.m_B = p.m_B + val;
    return temp;
}

// 全局函数实现<<运算符重载//cout是ostream,标准输出流
ostream &operator<<(ostream &cout, Person &p1) // 本质是operator<<(cout,p1),简化为cout<<p1,
{
    cout << "m_A = " << p1.m_A << " m_B = " << p1.m_B;
    return cout;
}

// void test01()
// {

//     Person p1(10, 10);
//     Person p2(20, 20);

//     // 成员函数方式
//     Person p3 = p2 + p1; // 相当于 p2.operator+(p1)
//     cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;

//     // 全局函数重载
//     Person p4 = p3 + 10; // 相当于 operator+(p3,10)
//     cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;
//     Person p5 = 10 + p4; // 相当于 operator+(10,p4)
//     cout << "mA:" << p5.m_A << " mB:" << p5.m_B << endl;
//     Person p6 = p1 + p1 + p1 + p1; // 可以连加
//     cout << "mA:" << p6.m_A << " mB:" << p6.m_B << endl;
// }

// 左移运算符重载
// 作用：可以输出自定义数据类型
void test02()
{
    Person p1(10, 10);
    cout << p1 << endl; // 要链式函数调用，返回cout
    p1 << cout << endl;
}

int main()
{

    // test01();
    test02();
    return 0;
}