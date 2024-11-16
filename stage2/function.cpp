#include <iostream>
using namespace std;

// 函数默认参数
//  int func(int a, int b=20, int c=30)
//  {
//      return a + b + c;
//  }
//  int main()
//  {
//      cout << func(10) << endl; //输出60//b,c默认参数可以少传参数
//      cout << func(10, 30) << endl; //输出70//传入b，按传入的值计算
//      return 0;
//  }

// int func(int a, int b = 10, int c = 10)
// {
//     return a + b + c;
// }

// // 1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
// // 2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
// int func2(int a = 10, int b = 20);//声明和实现只能有一个默认参数
// int func2(int a, int b)//不能重定义默认值
// {
//     return a + b;
// }

// int main()
// {

//     cout << "ret = " << func(20, 20) << endl;
//     cout << "ret = " << func(100) << endl;

//     system("pause");

//     return 0;
// }



// C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
// **语法：** `返回值类型 函数名 (数据类型){}`
//函数占位参数 ，占位参数也可以有默认参数
void func(int a, int) {
	cout << "this is func" << endl;
}

int main() {

	func(10,10); //占位参数必须填补
    //如果占位参数没有默认值，就必须传入占位参数
    //如果占位参数有默认值，就可以不传占位参数
	system("pause");

	return 0;
}