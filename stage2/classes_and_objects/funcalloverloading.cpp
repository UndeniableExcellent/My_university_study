#include <iostream>
#include <string>
using namespace std;

// 函数调用运算符重载()
/*#### 4.5.6 函数调用运算符重载
 * 函数调用运算符 ()  也可以重载
 * 由于重载后使用的方式非常像函数的调用，因此称为仿函数
 * 仿函数没有固定写法，非常灵活*/

class MyPrint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
};
void myPrint02(string test)
{
    cout << test << endl;
}
void test01()
{
    MyPrint myPrint;
    myPrint("hello world");   //
    myPrint02("hello world"); // 调用函数
}

// 仿函数非常灵活 没有固定写法
// 加法类
class MyAdd
{
public:
    int operator()(int v1, int v2)
    {
        return v1 + v2;
    }
};

void test02()
{
    MyAdd myAdd;
    cout << myAdd(10, 20) << endl;
    // 匿名对象 调用加法类
    // 匿名函数对象
    cout << MyAdd()(100, 200) << endl; // 没有名的对象，当前行执行完就释放对象
}

int main()
{
    test01();
    test02();
    return 0;
}