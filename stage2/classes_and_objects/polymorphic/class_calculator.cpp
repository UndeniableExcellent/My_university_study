#include <iostream>
#include <string>
using namespace std;
/*#### 4.7.2 多态案例一-计算器类
案例描述：
分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
多态的优点：
* 代码组织结构清晰
* 可读性强
* 利于前期和后期的扩展以及维护*/

class Calculator//普通写法
{
public:
    int m_Num1;
    int m_Num2;
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        //如果想扩展新功能，需要修改源码
        //真实开发中 提倡 开闭原则
        //开闭原则，对扩展进行开发，对修改进行关闭
    }
};
void test01()
{
    Calculator cal;
    cal.m_Num1 = 10;
    cal.m_Num2 = 20;
    cout << cal.getResult("+") << endl;
    cout << cal.getResult("-") << endl;
    cout << cal.getResult("*") << endl;
}
//利用多态实现计算器
//实现计算器抽象类
//多态好处
//组织结构清晰
//可读性强
//对于前期和后期拓展以及维护性高
class AbstractCalculator
{
public:
    virtual int getResult()//纯虚函数
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;
};
//实现加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

class SubCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

class MulCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
};

void test02()
{
    //多态使用条件
    //父类指针或者引用指向子类对象
    AbstractCalculator * abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult() << endl;
    delete abc;
    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->getResult() << endl;
    delete abc;
    abc = new MulCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1<<"*"<<abc->m_Num2<<"="<<abc->getResult() << endl;
    delete abc;
}
int main()
{
    //test01();
    test02();
    return 0;
}