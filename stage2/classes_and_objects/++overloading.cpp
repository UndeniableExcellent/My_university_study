#include <iostream>
using namespace std;

// 递增运算符重载
// 作用： 通过重载递增运算符，实现自己的整型数据
// 总结： 前置递增返回引用，后置递增返回值
class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myInt);

public:
    MyInteger()
    {
        m_Num = 0;
    }

    // 重载前置++运算符
    MyInteger &operator++() // 返回引用实现链式调用
    {
        // 自加1
        m_Num++;
        // 返回自加后的结果
        return *this;
    }

    // 重载后置++运算符
    MyInteger operator++(int) // int 占位参数，可以区分前置++和后置++
    {
        // 创建一个临时对象记录当时的结果
        MyInteger temp = *this;
        // 自加1
        m_Num++;
        // 返回临时对象
        return temp; // 返回的是局部变量的值，不能返回局部变量的引用
    }

    // 重置前置--运算符
    MyInteger &operator--()
    {
        m_Num--;
        return *this;
    }

    // 重置后置--运算符
    MyInteger operator--(int)
    {
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }

private:
    int m_Num;
};

ostream &operator<<(ostream &cout, MyInteger myInt)
{
    cout << myInt.m_Num;
    return cout;
}

void test01()
{
    MyInteger myInt;
    cout << ++myInt << endl;
    cout << myInt++ << endl;
    cout << --myInt << endl;
    cout << myInt-- << endl;
    cout << ++(++myInt) << endl;
}

int main()
{
    test01();
    return 0;
}