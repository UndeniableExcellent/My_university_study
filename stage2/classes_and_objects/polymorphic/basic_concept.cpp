#include <iostream>
using namespace std;
/*### 4.7  多态
#### 4.7.1 多态的基本概念
**多态是C++面向对象三大特性之一**
多态分为两类
* 静态多态: 函数重载 和 运算符重载属于静态多态，复用函数名
* 动态多态: 派生类和虚函数实现运行时多态
静态多态和动态多态区别：
* 静态多态的函数地址早绑定  -  编译阶段确定函数地址
* 动态多态的函数地址晚绑定  -  运行阶段确定函数地址*/

// 动物类
class Animal
{
public:
    virtual void speak() // 虚函数，用于动态绑定，实现多态//加virtual关键词
    {
        cout << "动物发出声音" << endl;
    }
};

// 猫类
class Cat : public Animal
{
public:
    void speak() // 重写父类的虚函数，实现多态
    {
        cout << "小猫发出声音" << endl;
    }
};

//狗类
class Dog : public Animal
{
    public:
    void speak()
    {
        cout << "小狗发出声音" << endl;
    }
};

//执行说话的函数
//地址早绑定，在编译阶段就确定函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定
void doSpeak(Animal &animal) // 传入父类引用，实现多态//用父类的引用指向子类
{
    animal.speak(); // 调用虚函数，根据传入的对象不同，调用不同的函数实现多态
}

//动态多态满足条件
//1.有继承关系
//2.子类重写父类中的虚函数//重写  函数返回值类型 函数名 参数列表完全相等//虚函数 父类函数前加virtual

//多态使用
//父类指针或引用指向子对象
void test01()
{
    Cat cat;
    doSpeak(cat); // 传入子类对象，调用子类函数

    Dog dog;
    doSpeak(dog); // 传入子类对象，调用子类函数
}

void test02()
{
    cout << "size of Animal: " << sizeof(Animal) << endl;//8//virtual一个指针vf_ptr  虚函数(表)指针 指向虚函数表——vf_table
}                                                        //virtual function pointer      表内部记录虚函数的地址 &Animal::speak

//当子类重写父类的虚函数  子类中的虚函数内部会替换为子类的虚函数地址
//当父类的指针或者引用指向子类对象时，发生多态
int main()
{
    test01();
    test02();
    return 0;
}
/*总结：

多态满足条件

* 有继承关系
* 子类重写父类中的虚函数

多态使用条件

* 父类指针或引用指向子类对象

重写：函数返回值类型  函数名 参数列表 完全一致称为重写*/