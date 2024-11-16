#include <iostream>
using namespace std;

//继承中的对象模型
class Base
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son:public Base
{
public:
    int m_D;
};

//利用开发人员命令提示工具查看对象模型
/*跳转盘符 D:
cd D:\c++study\C++zero_to_one\dark house\stage2\classes_and_objects\inheritance
cl /d1 reportSingleClassLayoutSon obj_model.cpp*/
void test01()
{
    cout<<"sizeof(Son) = "<<sizeof(Son)<<endl;//16//父类中所有非静态成员属性都会被子类继承//父类私有成员访问不到，但是确实被继承了
    cout<<"sizeof(Base) = "<<sizeof(Base)<<endl; //父类中私有成员也是被子类继承的
}

int main()
{
    test01();
    return 0;
}