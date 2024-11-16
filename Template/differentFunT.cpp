#include <iostream>
using namespace std;

/*普通函数与函数模板区别：
普通函数调用时可以发生自动类型转换（隐式类型转换）
函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
如果利用显示指定类型的方式，可以发生隐式类型转换*/

// /*总结：建议使用显示指定类型的方式，调用函数模板，因为可以自己确定通用类型T*
// 普通函数
int myAdd01(int a, int b) { return a + b; }
template <class T> // 也可以替换成typename
T myAdd02(T a, T b)
{
    return a + b;
}
void test01()
{
    int a = 10;
    int b = 20;
    cout << myAdd01(a, b) << endl; // 调用普通函数
    char c = 'c';
    cout << myAdd01(a, c) << endl; // 调用普通函数,发生隐式类型转换

    cout << myAdd02(a, b) << endl; // 调用函数模板
    // cout <<myAdd02(a,c)<<endl;//函数模板不可以发生隐式类型转换
    // 显示指定类型//会发生隐式类型转换
    cout << myAdd02<int>(a, c) << endl;
}
int main()
{
    test01();
    return 0;
}