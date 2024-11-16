/*利用C++来实现一个通讯录管理系统

系统中需要实现的功能如下：

* 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
* 显示联系人：显示通讯录中所有联系人信息
* 删除联系人：按照姓名进行删除指定联系人
* 查找联系人：按照姓名查看指定联系人信息
* 修改联系人：按照姓名重新修改指定联系人
* 清空联系人：清空通讯录中所有信息
* 退出通讯录：退出当前使用的通讯录*/
#include <iostream>
#include <string>
#include <vector>
#define MAX 1000
using namespace std;

struct Person
{
    string name;
    string sex;
    int age;
    string phone;
    string address;
};
struct Addressbooks
{
    struct Person personarray[MAX];
    int size;
};
// 菜单界面
void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}
void addPerson(Addressbooks &abs)
{
    if (abs.size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        string name;
        cout << "请输入姓名： " << endl;
        cin >> name;
        abs.personarray[abs.size].name = name;
        cout << "请输入性别： " << endl;
        cin >> abs.personarray[abs.size].sex;
        cout << "请输入年龄： " << endl;
        cin >> abs.personarray[abs.size].age;
        cout << "请输入电话： " << endl;
        cin >> abs.personarray[abs.size].phone;
        cout << "请输入地址： " << endl;
        cin >> abs.personarray[abs.size].address;
        abs.size++;
    }
}
void showPerson(Addressbooks &abs)
{
    if (abs.size == 0)
    {
        cout << "通讯录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs.size; i++)
        {
            cout << "姓名：" << abs.personarray[i].name << "  ";
            cout << "性别：" << abs.personarray[i].sex << "  ";
            cout << "年龄：" << abs.personarray[i].age << "  ";
            cout << "电话：" << abs.personarray[i].phone << "  ";
            cout << "地址：" << abs.personarray[i].address << endl;
        }
    }
}
void findPerson(Addressbooks &abs)
{
    string name;
    cout << "请输入要查找的联系人： " << endl;
    cin >> name;
    int i = 0;
    for (i = 0; i < abs.size; i++)
    {
        if (abs.personarray[i].name == name)
        {
            cout << "姓名：" << abs.personarray[i].name << endl;
            cout << "性别：" << abs.personarray[i].sex << endl;
            cout << "年龄：" << abs.personarray[i].age << endl;
            cout << "电话：" << abs.personarray[i].phone << endl;
            cout << "地址：" << abs.personarray[i].address << endl;
            return;
        }
    }
    if (i == abs.size)
    {
        cout << "查无此人" << endl;
        return;
    }
}
void delPerson(Addressbooks &abs)
{
    if (abs.size == 0)
    {
        cout << "通讯录为空" << endl;
        return;
    }
    else
    {
        cout << "请输入要删除的联系人姓名： " << endl;
        string name;
        cin >> name;
        int i = 0;
        for (i = 0; i < abs.size; i++)
        {
            if (abs.personarray[i].name == name)
            {
                for (int j = i; j < abs.size; j++)
                {
                    abs.personarray[j] = abs.personarray[j + 1];
                }
                abs.size--;
                cout << "删除成功" << endl;
                return;
            }
        }
        if (abs.size == i)
        {
            cout << "查无此人" << endl;
            return;
        }
    }
}
void modifyPerson(Addressbooks &abs)
{
    if (abs.size == 0)
    {
        cout << "通讯录为空" << endl;
        return;
    }
    else
    {
        cout << "请输入要修改的联系人姓名： " << endl;
        string name;
        cin >> name;
        int i = 0;
        for (i = 0; i < abs.size; i++)
        {
            if (abs.personarray[i].name == name)
            {
                int select = -1;
                while (select)
                {
                    cout << "请输入你要更改的项目：" << endl;
                    cout << "0.退出修改  ";
                    cout << "1.姓名  ";
                    cout << "2.性别  ";
                    cout << "3.年龄  ";
                    cout << "4.电话  ";
                    cout << "5.地址  ";
                    cin >> select;
                    switch (select)
                    {
                    case 0:
                        cout << "退出修改" << endl;
                        return;
                        break;
                    case 1:
                        cout << "请输入姓名： " << endl;
                        cin >> abs.personarray[i].name;
                        break;
                    case 2:
                        cout << "请输入性别： " << endl;
                        cin >> abs.personarray[i].sex;
                        break;
                    case 3:
                        cout << "请输入年龄： " << endl;
                        cin >> abs.personarray[i].age;
                        break;
                    case 4:
                        cout << "请输入电话： " << endl;
                        cin >> abs.personarray[i].phone;
                        break;
                    case 5:
                        cout << "请输入地址： " << endl;
                        cin >> abs.personarray[i].address;
                        break;
                    default:
                        cout << "输入错误，请重新输入！" << endl;
                        break;
                    }
                }
            }
        }
        if (abs.size == i)
        {
            cout << "查无此人" << endl;
        }
    }
}
int main()
{
    Addressbooks abs;
    abs.size = 0;
    int select = 0;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:
            addPerson(abs);
            break;
        case 2:
            showPerson(abs);
            break;
        case 3:
            delPerson(abs);
            break;
        case 4:
            findPerson(abs);
            break;
        case 5:
            modifyPerson(abs);
            break;
        case 6:
            abs.size = 0;
            cout<<"通讯录已清空"<<endl;
            break;
        case 0:
            cout << "欢迎下次使用" << endl;
            return 0;
            break;
        default:
            break;
        }
    }
    return 0;
}