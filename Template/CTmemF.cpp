#include <iostream>
using namespace std;
#include <string>

//类模版成员函数类外实现
template <class T1, class T2>
class Person
{
    public:
        Person(T1 name, T2 age);
        void showPerson();
    public:
        T1 m_Name;
        T2 m_Age;
};
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Name = name;
    this->m_Age = age;
}
template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
    cout << "name: " << this->m_Name << " age: " << this->m_Age << endl;
}
void test01()
{
    Person<string, int> p("Tom", 18);
    p.showPerson();
}
int main()
{
    test01();
    return 0;
}