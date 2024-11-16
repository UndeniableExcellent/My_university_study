#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cin >> a;
    cout << a << endl;
    bool flag = true;     // 占一个字节
    cout << flag << endl; // 一代表真
    flag = false;
    cout << flag << endl; // 0代表假
    return 0;
}