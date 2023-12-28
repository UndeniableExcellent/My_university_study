#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int *p = arr;
    // cout << *p++ << endl;//1
    // cout << *p << endl;//3
    // cout << endl;

    // p = arr;
    // cout << (*p)++ << endl;//1
    // cout << *p << endl;//2
    // cout << endl;

    // p = arr;
    // cout << *++p << endl;//3
    // cout << *p << endl;//3
    // cout << endl;

    p = arr;
    cout << ++*p << endl;//2
    cout << *p << endl;//2
    cout << endl;
    return 0;
}