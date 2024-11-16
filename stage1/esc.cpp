#include <iostream>
using namespace std;
#include <string>//c++中没有string类，需要引入string头文件
// int main()
// {
//     cout << "aaa\taaa" << endl;//水平制表符，始终有8个空，让输出对齐
//     cout << "aaaa\taaa" << endl;
//     cout << "aaaaa\taaa" << endl;
//     return 0;
// }

// 字符串//字符串
int main()
{
    char str[] = "hello world";
    int a,b,c;
    string str2 = "hello world";
    string str3;
    cin>>str3;
    cout << str3 << endl;
    cout << str << endl;
    cout << str2 << endl;
    return 0;
}