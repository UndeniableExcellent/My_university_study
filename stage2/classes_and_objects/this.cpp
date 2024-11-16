#include <iostream>
using namespace std;

/*#### 4.3.2 this指针概念

通过4.3.1我们知道在C++中成员变量和成员函数是分开存储的

每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码

那么问题是：这一块代码是如何区分那个对象调用自己的呢？

c++通过提供特殊的对象指针，this指针，解决上述问题。**this指针指向被调用的成员函数所属的对象**

this指针是隐含每一个非静态成员函数内的一种指针

this指针不需要定义，直接使用即可
this指针的用途：

*  当形参和成员变量同名时，可用this指针来区分
*  在类的非静态成员函数中返回对象本身，可使用return *this*/

// class Person
// {
// public:
//     Person(int age)
//     {
//         //this指针指向被调用的成员函数所属的对象
//         this->m_Age = age;
//     }
//     //返回对象本身用*this
//     Person& PersonAdd_age(Person &p)
//     {
//         this->m_Age+=p.m_Age;
//         return *this;
//     }
//     void showAge()
//     {
//         cout << "m_Age = " << this->m_Age << endl;
//     }

//     int m_Age;
// };
// //解决命名冲突
// void test01()
// {
//     Person p1(10);
//     p1.showAge();
// }

// void test02()
// {
//     Person p1(10);
//     Person p2(10);
//     Person p3 = p1.PersonAdd_age(p2);
//     p3.showAge();
//     p2.showAge();
//     p1.showAge();
//     p1.m_Age=10;
//     p2.PersonAdd_age(p1).PersonAdd_age(p1);
//     p2.showAge();//值传递只加了一次//使用引用返回
// }

// int main()
// {
//     //test01();
//     test02();
//     return 0;
// }


/*#### 4.3.3 空指针访问成员函数
C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
如果用到this指针，需要加以判断保证代码的健壮性*/
//空指针访问成员函数
class Person {
public:

	void ShowClassName() {
		cout << "我是Person类!" << endl;
	}

	void ShowPerson() {
		if (this == NULL) {//如果是空指针就退出，增强程序健壮性
			return;
		}
		cout << mAge << endl;
	}

public:
	int mAge;
};

void test01()
{
	Person * p = NULL;
	p->ShowClassName(); //空指针，可以调用成员函数
	p->ShowPerson();  //但是如果成员函数中用到了this指针，就不可以了
}

int main() {

	test01();

	return 0;
}