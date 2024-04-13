#include <iostream>
#include <string>
using namespace std;
/*#### 4.7.5 虚析构和纯虚析构
多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
解决方式：将父类中的析构函数改为**虚析构**或者**纯虚析构**
虚析构和纯虚析构共性：
* 可以解决父类指针释放子类对象
* 都需要有具体的函数实现
虚析构和纯虚析构区别：
* 如果是纯虚析构，该类属于抽象类，无法实例化对象
虚析构语法：
`virtual ~类名(){}`
纯虚析构语法：
` virtual ~类名() = 0;`
`类名::~类名(){}`
*/

class Animal
{
public:
    Animal()
    {
        cout << "Animal构造" << endl;
    }
    // virtual ~Animal()//虚析构解决父类指针释放子类对象时不干净的问题
    // {
    //     cout << "Animal析构" << endl;
    // }
    virtual ~Animal() = 0; // 这里只是纯虚析构声明，纯虚析构在父类指针也会调用，必须有具体的代码实现//纯虚析构解决父类指针释放子类对象时不干净的问题
    virtual void speak() = 0;
};
//纯虚析构需要声明也需要实现
//有了纯虚析构后这个类也属于抽象类，无法实例化对象
Animal::~Animal()
{
    cout << "Animal纯虚析构" << endl;//纯虚析构具体实现
}

class Cat : public Animal
{
public:
    Cat(string name)
    {
        m_name = new string(name);
        cout << "Cat构造" << endl;
    }
    ~Cat()
    {
        if (m_name != NULL)
        {
            delete m_name;
            m_name = NULL;
            cout << "Cat析构" << endl;
        }
    }
    virtual void speak()
    {
        cout << *m_name << "喵喵喵" << endl;
    }
    string *m_name;
};
void test01()
{
    Animal *animal = new Cat("Tom");
    animal->speak();
    delete animal; // 父类指针在析构时候 不会调用子类中的析构函数 导致子类中如果有堆区属性 出现内存泄漏//用虚析构解决
}
/*总结：

​	1. 虚析构或纯虚析构就是用来解决通过父类指针释放子类对象

​	2. 如果子类中没有堆区数据，可以不写为虚析构或纯虚析构

​	3. 拥有纯虚析构函数的类也属于抽象类

*/

int main()
{
    test01();
    return 0;
}