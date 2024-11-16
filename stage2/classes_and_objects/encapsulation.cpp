#include <iostream>
#include <string>
using namespace std;

// const double PI = 3.14;
// //设计一个圆类，求圆的周长
// class Circle
// {
//     //访问权限
// public:
//     //属性
//     int m_r;
//     //行为
//     //获取圆的周长
//     double calculateZC()
//     {
//         return 2*PI*m_r;
//     }
// };
// int main()
// {
//     //通过圆类，创建具体的圆（对象）
//     //实例化--通过一个类创建对象的过程
//     Circle c1;
//     c1.m_r=10;
//     cout<<"圆的周长是"<<c1.calculateZC()<<endl;
//     return 0;
// }

//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
// class Student
// {
//     //类中的属性和行为 统称为成员
//     //属性  成员属性 成员变量
//     //行为  成员函数 成员方法
// public:
//     string m_name;
//     int m_id;
//     void show()
//     {
//         cout<<"姓名："<<m_name<<endl<<"学号："<<m_id<<endl;
//     }
//     void setName(string name)
//     {
//         //this->m_name=name;
//         m_name=name;
//     }
//     void setId(int id)
//     {
//         //this->m_id=id;
//         m_id=id;
//     }
// };
// int main()
// {
//     Student s1;
//     s1.setName("张三");
//     s1.setId(1001);
//     s1.show();
//     return 0;
// }

// **封装意义二：**

// 类在设计时，可以把属性和行为放在不同的权限下，加以控制

// 访问权限有三种：

// 1. public        公共权限  //在类内可以访问 类外也可以访问
// 2. protected 保护权限   //类内可以访问  类外不可以访问  儿子可以访问父亲中的保护内容  继承中可以访问  不能被实例化对象访问，只能被子类访问
// 3. private      私有权限//类内可以访问  类外不可以访问  儿子不可以访问父亲的私有内容
// class Person
// {
// public:
//     string m_name;
// protected:
//     string m_car;
// private:
//     int m_password;
// public:
//     void func()
//     {
//         m_name="张三";
//         m_car="拖拉机";
//         m_password=123456;
//     }
// };
// int main()
// {
//     //实例化具体对象
//     Person p1;
//     p1.m_name="李四";
//     //p1.m_car="奔驰";//成员不可访问
//     //p1.m_password=123;//成员不可访问
// }



// 在C++中 struct和class唯一的**区别**就在于 **默认的访问权限不同**

// 区别：

// * struct 默认权限为公共
// * class   默认权限为私有

// class C1
// {
// 	int  m_A; //默认是私有权限
// };

// struct C2
// {
// 	int m_A;  //默认是公共权限
//     void func()//c++中struct也可以写函数
//     {
//         cout<<m_A<<endl; //正确，访问权限是公共
//     }
// };

// int main() {

// 	C1 c1;
// 	//c1.m_A = 10; //错误，访问权限是私有

// 	C2 c2;
// 	c2.m_A = 10; //正确，访问权限是公共
//     c2.func();

// 	return 0;
// }



// #### 4.1.3 成员属性设置为私有
// **优点1：**将所有成员属性设置为私有，可以自己控制读写权限
// **优点2：**对于写权限，我们可以检测数据的有效性

class Person
{
public:
    void setName(string name)
    {
        m_name=name;
    }
    string getName()
    {
        return m_name;
    }

    //获取年龄
    int getAge()
    {
        return m_age;
    }
    //设置年龄
    void setAge(int age)
    {
        if(age<0||age>150)
        {
            cout<<"年龄设置错误"<<endl;
            return;
        }
        m_age=age;
    }

    //设置偶像
    void setIdol(string idol)
    {
        m_Idol=idol;
    }
private:
    string m_name;//可读可写

    int m_age=18;//只读  也可以写(年龄必须在0-150之间)

    string m_Idol;//只写
};
int main()
{
    Person p1;
    //p1.m_name="张三";//不可访问
    //cout<<p1.m_name<<endl;//不可访问
    p1.setName("张三");
    cout<<p1.getName()<<endl;

    //p1.setAge(-20);
    p1.setAge(20);
    cout<<p1.getAge()<<endl;
    p1.setIdol("李四");
    //cout<<p1.m_Idol<<endl;//不可访问
    return 0;
}