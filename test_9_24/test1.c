#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

////选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0):");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//
//}


////while循环
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("好offer\n");
//
//	return 0;
//}


////函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
//	char arr2[20];
//	//printf("%d\n", arr[4]);//下标方式访问元素
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//&按位与  |按位或  ^按位异或-对应的二进制位相同为0，相异则为1
//	//011
//	//101
//	//001//111//110
//
//
//	printf("%d\n", c);
//	
//	
//	int d = 0;//b是有符号的整形 最高位表示符号
//	int e = ~d;  //按位取反 二进制0/1相反//负数,整数在内存中存储时存储的时二进制的补码
//	printf("%d\n", e);//打印的是原码//源码------>反码------->补码
//	//正数源码反码补码相同//                    源码符号位不变其他位取反得反码//补码为反码+1
//	return 0;
//}

//单目操作符  sizeof计算变量/类型所占类型大小，单位字节
//双目操作符
//三目操作符

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++  先使用再++
//	int b = ++a;//前置++  先++再使用
//	printf("a = %d b = %d\n", a, b);
//	int c = (int)3.14;//(类型）强制类型转换
//
//	return 0;
//}

//关系操作符==  ！=   >=
//逻辑操作符 &&逻辑与  ||逻辑或

//条件操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//三目操作符
//	printf("%d\n", max);
//	return 0;
//}
//逗号表达式

//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]下标引用操作符
//	return 0;//（）函数引用操作符
//}

//void test()
//{
//	//int a = 1;//a是局部变量，进入作用域生命周期开始，出生命周期销毁 结果5个2
//	static int a = 1;//a是静态的局部变量 结果23456//static修饰局部变量，局部变量生命周期变长
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	extern int g_val;  //extern声明外部符号
//	printf("g_val = %d", g_val);
//	return 0;
//}

//extern Add(int, int);//声明外部函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d", sum);
//	return 0;
//}
//

//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏-带参数
#define MAX(X,Y) (X>Y?X:Y)//宏的定义

//int Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;//用来存放地址的变量--指针变量
//	printf("%p\n", &a);//&取地址运算符
//	printf("%p\n", p);
//	*p=20;//*解引用操作符
//	printf("a = %d",a );
//
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;//地址64位平台一个指针的大小为64个比特位，8个字节
	printf("%d\n", sizeof(pc));
	*pc = 'a';
	printf("%c\n", ch);
	return 0;
}