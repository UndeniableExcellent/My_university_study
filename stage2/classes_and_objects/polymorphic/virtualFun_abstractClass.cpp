#include <iostream>
using namespace std;

/*#### 4.7.3 纯虚函数和抽象类
在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
因此可以将虚函数改为**纯虚函数**
纯虚函数语法：`virtual 返回值类型 函数名 （参数列表）= 0 ;`
当类中有了纯虚函数，这个类也称为==抽象类==
**抽象类特点**：

 * 无法实例化对象
 * 子类必须重写抽象类中的纯虚函数，否则也属于抽象类*/
// 纯虚函数和抽象类
class Base
{
public:
    virtual void func() = 0;//纯虚函数
    //只要有一个纯虚函数，这个类称为抽象类
    //抽象类特点：
    //1.无法实例化对象
    //2.抽象类的子类  必须要重写父类中的纯虚函数，否则也属于抽象类
};

class Son:public Base
{
public:
    virtual void func() override//重写
    {
        cout << "Son::func()" << endl;
    }
};

void test01()
{
    //Base b;//不允许使用抽象类类型"Base"的对象
    //抽象类只能作为父类，不能实例化对象
    //new Base;
    Son s;
    Base*base=new Son;//父类指针指向子类对象
    base->func();
    delete base;
}
int main()
{
    test01();
    return 0;
}