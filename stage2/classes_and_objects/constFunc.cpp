#include <iostream>
using namespace std;

/*#### 4.3.4 const修饰成员函数

**常函数：**

* 成员函数后加const后我们称为这个函数为**常函数**
* 常函数内不可以修改成员属性
* 成员属性声明时加关键字mutable后，在常函数中依然可以修改

**常对象：**

* 声明对象前加const称该对象为常对象
* 常对象只能调用常函数和静态成员函数*/

class Person
{
    public:
    //Person(int a,int b):m_A(a),m_B(b){}
    Person()
    {
        m_A = 0;
        m_B = 0;
    }
    void ShowPerson() const//相当于const Person* const this,让指针指向的值也不可以修改
    {
        //this->m_A = 10;//表达书必须是可修改的左值
        //this是指针常量，不可以修改指向
        m_B = 10;//mutable修饰的成员变量，在常函数中依然可以修改
        cout << "A = " << m_A << endl;
        cout << "B = " << m_B << endl;
    }
    void func()
    {
        m_A=100;
    }
    static void func2()
    {
        //m_A = 100;//静态成员函数只能访问静态成员变量
        cout<<"静态成员函数"<<endl;
    }
    int m_A;
    mutable int m_B;//加mutable关键字，特殊变量，即使在常函数中也可以修改这个值
};

void test01()
{
    Person p;
    p.ShowPerson();//常函数
}

//常对象
void test02()
{
    const Person p;//在对象前加const，变成常对象
    p.ShowPerson();
    //p.func();//错误，常对象只能调用常函数
    p.func2();//正确，静态成员函数可以调用
}
int main()
{
    test01();
    test02();
    return 0;
}