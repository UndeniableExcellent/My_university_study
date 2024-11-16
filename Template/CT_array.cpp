#include <iostream>
using namespace std;
/*案例描述: 实现一个通用的数组类，要求如下：

可以对内置数据类型以及自定义数据类型的数据进行存储
将数组中的数据存储到堆区
构造函数中可以传入数组的容量
提供对应的拷贝构造函数以及operator=防止浅拷贝问题
提供尾插法和尾删法对数组中的数据进行增加和删除
可以通过下标的方式访问数组中的元素
可以获取数组中当前元素个数和数组的容量*/
class Person;
template<class T>
class MyArray
{
private:
    T* pAddress; //指向数组首地址
    int m_Capacity; //数组容量
    int m_Size; //数组中当前元素个数
public:
    MyArray(int capacity)
    {
        pAddress = new T[capacity];
        m_Capacity = capacity;
        m_Size = 0;
    }
    MyArray(const MyArray& arr) //拷贝构造函数
    {
        this->pAddress = new T[arr.m_Capacity];
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        for (int i = 0; i < m_Size; i++)
        {
            pAddress[i] = arr.pAddress[i];
        }
    }
    //重载=操作符
    MyArray& operator=(const MyArray& arr)
    {
        if(this->pAddress!=NULL)
        {
            delete[] this->pAddress;
            this->m_Capacity=0;
            this->m_Size=0;
        }
        this->pAddress = new T[arr.m_Capacity];
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        for (int i = 0; i < m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }
    //重载[]
    T& operator[](int index)
    {
        return this->pAddress[index];
    }
    ~MyArray() //析构函数，释放内存空间
    {
        if (pAddress!=NULL)
        {
            delete[] pAddress;
            pAddress = NULL;
        }  
    }
    //尾插法
    void Push_Back(T &data)
    {
        if(this->m_Capacity==this->m_Size)
        {
            return;
        }
        this->pAddress[this->m_Size] = data;
        this->m_Size++;
    }
    //尾删法
    void Pop_Back()
    {
        if(this->m_Size==0)
        {
            return;
        }
        this->m_Size--;
    }
    //获取数组大小
    int getSize()
    {
        return this->m_Size;
    }
    //获取数组容量
    int getCapacity()
    {
        return this->m_Capacity;
    }

};

void printIntArray(MyArray<int> &arr)
{
    for(int i=0;i<arr.getSize();i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//测试内置数据类型
void test01()
{
    MyArray<int> array1(10);
    for(int i=0;i<10;i++)
    {
        array1.Push_Back(i);
    }
    cout << "array1的size为：" << array1.getSize() << endl;
    cout << "array1打印输出:";
    printIntArray(array1);
    cout <<"array1的capacity为：" << array1.getCapacity() << endl;
    MyArray<int> array2(array1);
    array2.Pop_Back();
    cout << "array2的size为：" << array2.getSize() << endl;
    cout << "array2的capacity为：" << array2.getCapacity() << endl;
    cout << "array2打印输出:";
    printIntArray(array2);
}
class Person
{
public:
	string m_Name;
	int m_Age;
    Person(){}//这里自定义person一定要有无参析构,否则会报错
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
};
void printPersonArray(MyArray<Person>& personArr)
{
	for (int i = 0; i < personArr.getSize(); i++) {
		cout << "姓名：" << personArr[i].m_Name << " 年龄： " << personArr[i].m_Age << endl;
	}

}


void test02()
{
	//创建数组
	MyArray<Person> pArray(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	//插入数据
	pArray.Push_Back(p1);
	pArray.Push_Back(p2);
	pArray.Push_Back(p3);
	pArray.Push_Back(p4);
	pArray.Push_Back(p5);

	printPersonArray(pArray);

	cout << "pArray的大小：" << pArray.getSize() << endl;
	cout << "pArray的容量：" << pArray.getCapacity() << endl;

}
int main()
{
    test01();
    test02();
    return 0;
}