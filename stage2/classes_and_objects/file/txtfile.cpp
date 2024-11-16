#include <iostream>
#include <fstream> //C++文件操作的头文件
#include <string>
using namespace std;
/*## 5 文件操作
程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
通过**文件可以将数据持久化**
C++中对文件操作需要包含头文件 ==&lt; fstream &gt;==
文件类型分为两种：

1. **文本文件**     -  文件以文本的**ASCII码**形式存储在计算机中
2. **二进制文件** -  文件以文本的**二进制**形式存储在计算机中，用户一般不能直接读懂它们
操作文件的三大类:

1. ofstream：写操作
2. ifstream： 读操作
3. fstream ： 读写操作*/

/*### 5.1文本文件

#### 5.1.1写文件

   写文件步骤如下：

1. 包含头文件

   \#include <fstream\>

2. 创建流对象

   ofstream ofs;

3. 打开文件

   ofs.open("文件路径",打开方式);

4. 写数据

   ofs << "写入的数据";

5. 关闭文件

   ofs.close();*/

/*文件打开方式：

| 打开方式    | 解释                       |
| ----------- | -------------------------- |
| ios::in     | 为读文件而打开文件         |
| ios::out    | 为写文件而打开文件         |
| ios::ate    | 初始位置：文件尾           |
| ios::app    | 追加方式写文件             |
| ios::trunc  | 如果文件存在先删除，再创建 |
| ios::binary | 二进制方式                 |

**注意：** 文件打开方式可以配合使用，利用|操作符

**例如：**用二进制方式写文件 `ios::binary |  ios:: out`*/
/*总结：

* 文件操作必须包含头文件 fstream
* 读文件可以利用 ofstream  ，或者fstream类
* 打开文件时候需要指定操作文件的路径，以及打开方式
* 利用<<可以向文件中写数据
* 操作完毕，要关闭文件*/
void test01()
{
   // 创建输出流对象
   ofstream ofs;
   ofs.open("test.txt", ios::out); // 写文件
   ofs << "姓名：张三" << endl;
   ofs << "性别：男" << endl;
   ofs << "年龄：18" << endl;
   // 关闭文件
   ofs.close();
}

/*
#### 5.1.2读文件
读文件与写文件步骤相似，但是读取方式相对于比较多
读文件步骤如下：
1. 包含头文件
   \#include <fstream\>
2. 创建流对象
   ifstream ifs;
3. 打开文件并判断文件是否打开成功

   ifs.open("文件路径",打开方式);

4. 读数据

   四种方式读取

5. 关闭文件

   ifs.close();*/

void test02()
{
   ifstream ifs;
   ifs.open("test.txt", ios::in);
   if (!ifs.is_open())
   {
      cout << "文件打开失败" << endl;
      return;
   }
   // 读数据
   // char buf[1024] = {0};
   // while (ifs >> buf)
   // {
   //    cout << buf << endl;
   // }

   // char buf[1024] = {0};
   // while (ifs.getline(buf, sizeof(buf)))
   // {
   //    cout << buf << endl;
   // }

   // string buf;
   // while (getline(ifs, buf))
   // {
   //    cout << buf << endl;
   // }

   char c;
   while ((c = ifs.get()) != EOF)//一个一个字符读
   {
      cout << c;
   }

   // 关闭文件
   ifs.close();
}

/*总结：

- 读文件可以利用 ifstream  ，或者fstream类
- 利用is_open函数可以判断文件是否打开成功
- close 关闭文件 */
int main()
{
   // test01();
   test02();
   return 0;
}