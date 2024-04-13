#include <iostream>
using namespace std;

// 引用
//  **作用： **给变量起别名
//  **语法：** `数据类型 &别名 = 原名`
//  int main()
//  {
//      int a = 10;
//      int &b = a; // b是a的引用，b和a指向同一个变量
//      cout << "a = " << a << endl;
//      cout << "b = " << b << endl;
//      b = 20; // 通过b修改a的值
//      cout << "a = " << a << endl;
//      cout << "b = " << b << endl;
//      return 0;
//  }

// C++ 引用 vs 指针
// 引用很容易与指针混淆，它们之间有三个主要的不同：

// 不存在空引用。引用必须连接到一块合法的内存。
// 一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
// 引用必须在创建时被初始化。指针可以在任何时间被初始化。
// 引用必须初始化
// int main() {

// 	int a = 10;
// 	int b = 20;
// 	//int &c; //错误，引用必须初始化
// 	int &c = a; //一旦初始化后，就不可以更改
// 	c = b; //这是赋值操作，不是更改引用

// 	cout << "a = " << a << endl;
// 	cout << "b = " << b << endl;
// 	cout << "c = " << c << endl;

// 	return 0;
// }

// 引用的用途
// 引用做函数参数
//  **作用：**函数传参时，可以利用引用的技术让形参修饰实参
//  **优点：**可以简化指针修改实参

// 交换函数
// 值传递
// void swap1(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// //地址传递
// void swap2(int *a, int *b)//指针*
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // 引用传递
// void swap3(int &a, int &b)//引用&//引用传递，形参会修饰实参，这里相当于给main函数的a和b起了别名，修饰了main函数的a和b
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     swap1(a, b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     // swap2(&a, &b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     swap3(a, b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     return 0;
// }

//引用作函数的返回值
//注意不要返回局部变量的引用
// int& test01()
// {
//     int a=10;
//     return a;//错误
// }
// int& test02()
// {
//     static int a=10;
//     return a;//正确
// }
// int main()
// {
//     // int &ref = test01();
//     // cout << ref << endl;
//     // cout << ref << endl;
//     int &ref = test02();
//     cout << ref << endl;
//     cout << ref << endl;
//     //函数的调用可以作为左值
//     test02() = 100;
//     cout << ref << endl;
//     return 0;
// }


//引用的本质是指针常量
//发现是引用，转换为 int* const ref = &a;
//指针指向的地址是固定的，指针指向的值是可以改的
// void func(int& ref){
// 	ref = 100; // ref是引用，转换为*ref = 100
// }
// int main(){
// 	int a = 10;
    
//     //自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
// 	int& ref = a; 
// 	ref = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;
    
// 	cout << "a:" << a << endl;
// 	cout << "ref:" << ref << endl;
    
// 	func(a);
// 	return 0;
// } 

//常量引用
// **作用：**常量引用主要用来修饰形参，防止误操作
// 在函数形参列表中，可以加==const修饰形参==，防止形参改变实参
//引用使用的场景，通常用来修饰形参
void showValue(const int& v) {//const修饰形参，防止形参改变实参
	//v += 10;//表达式必须是可修改的左值
	cout << v << endl;
}

int main() {

	//int& ref = 10;//非常量引用的初始值必须为左值  //引用本身需要一个合法的内存空间，因此这行错误
	//加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp;
	const int& ref = 10;

	//ref = 100;  //加入const后不可以修改变量
	cout << ref << endl;

	//函数中利用常量引用防止误操作修改实参
	int a = 10;
	showValue(a);

	system("pause");

	return 0;
} 