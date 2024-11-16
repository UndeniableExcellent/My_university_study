#include <iostream>
#include <fstream>
using namespace std;

/*### 5.2 二进制文件
以二进制的方式对文件进行读写操作
打开方式要指定为 ==ios::binary==
#### 5.2.1 写文件
二进制方式写文件主要利用流对象调用成员函数write
函数原型 ：`ostream& write(const char * buffer,int len);`
参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数*/

// 文件输出流对象 可以通过write函数，以二进制方式写数据
class Person
{
public:
    char m_Name[64];
    int m_Age;
};
void test01()
{
    // 创建一个文件流对象，并打开一个文件用于写入数据。如果文件不存在，则创建该文件。如果文件存在，则清空文件内容。
    ofstream outfile("person.bat", ios::out | ios::binary | ios::trunc); // 构造函数，创建对象的同时打开文件
    if (!outfile)
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    // 创建一个Person对象，并将其写入文件流中。
    Person p = {"张三", 18};
    outfile.write((const char *)&p, sizeof(p));
    outfile.close();
}

/*#### 5.2.2 读文件

二进制方式读文件主要利用流对象调用成员函数read

函数原型：`istream& read(char *buffer,int len);`

参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数*/
//文件输入流对象 可以通过read函数，以二进制方式读数据
void test02()
{
    ifstream infile("person.bat", ios::in | ios::binary); // 构造函数，创建对象的同时打开文件
    if (!infile)                                          // 判断文件是否成功打开。
    {
        cout << "文件打开失败！" << endl;
        return;
    }
    Person p;                                   // 创建一个Person对象，用于存储从文件中读取的数据。
    infile.read((char *)&p, sizeof(p));         // 从文件流中读取数据，并存储到Person对象中。
    infile.close();                             // 关闭文件流对象。
    cout << p.m_Name << " " << p.m_Age << endl; // 输出Person对象中的数据。
}
int main()
{
    // test01();
    test02();
    return 0;
}