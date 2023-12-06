#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> //包含stdio.h文件 standard input output
//int main() //主函数-程序的入口
//{
//	printf("hello world\n");
//	return 0;
//}
//char字符数据类型
//%c-打印字符格式的数据
//%d-打印整形十进制数据
//%f-打印浮点数
//%p以地址形式打印
//%n-打印16进制数字
// %s-打印字符串
//int main()
//{
//	char ch = 'A';//内存
//	printf("%c\n", ch);//%c打印字符格式的数据
//	int age = 20;
//	printf("%d\n",age);//%d打印整形十进制数据
//	//short int短整型
//	//lon长整型
//	long num = 100;
//	printf("%d\n", num);
//	//double-双精度浮点数
//	double d = 3.14;
//	printf("%lf\n", d);//%lf打印双精度浮点数
//	return 0;
//}
//int main()
//{
//	float weight = 66.6f;
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}
//int num2 = 20;//全局变量定义在代码块{}外的变量
//int main()
//{
//	int num1 = 10;//局部变量定义在代码块内//局部变量和全局变量可同名，不建议，局部变量优先
//	printf("%d\n", num1);
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//输入函数scanf
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	int sum = 0;
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	extern int g_val;//extern声明外部符号
//	printf("%d\n", g_val);
//	return 0;
//	
//}
//int main()
//{
//	const int num = 4;//const 常属性 const修饰的常变量  本质上还是变量 有常属性
//	printf("%d\n", num);
//}
//#define MAX 10//define定义的标识符常量
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//
////枚举常量 枚举关键字enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECREF
//}; 
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECREF);
//}

//字符串-双引号引起来的叫字符串
//int main()
//{
//	char arr1[] = "abc";//数组//字符串末尾默认放一个\0-字符串结束标志
//	char arr2[] = { 'a','b','c'};  //''单引号引起的字符char
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//strlen计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//转义字符
int main()
{
	printf("abc\n");//\n换行  \t水平制表符
	printf("D:\\vs_2022\\Common7\\IDE\\VC\\VCProjectItems\n");//\\表示一个反斜杠，防止\被用于转义字符
	printf("%d\n", strlen("c:\test\32\test.c"));//长度13  \t,\32,\t各是一个字符
	printf("%c\n", '\32');//\32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	printf("%c\n", '\x61');//\x61表示十六进制转为十进制作为ASCII，对应的字符
	return 0;               
}
