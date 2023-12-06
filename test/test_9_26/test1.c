#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%d\n", sizeof(pd));//指针变量大小32位设备32个比特位4个字节，64平台8个字节
//
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int* p = &a;//p是指针变量
//	//printf("%p\n", p);
//	//*p = 20;//*解引用操作符，间接访问操作符
//	//printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("hello,world!");
//	//getchar();
//	return 0;
//}


//结构体---描述复杂对象
struct Book
{
	char name[20];//C语言程序设计  
	short price;//55
};

int main()
{
	struct Book b1 = { "C语言程序设计",55 };//利用结构体类型创建一个该类型的结构体变量
	/*b1.name = "C++"*///name是数组名,本质是个地址，不能直接改
	strcpy(b1.name, "C++");
	printf("%s\n", b1.name);//改字符串用strcpy库函数string.h
	struct Book* pd = &b1;
	printf("%s\n", (*pd).name);//()不可少 .操作符优先级很高
	printf("%d\n", (*pd).price);//.结构体变量.成员
	printf("%s\n", pd->name);//箭头->  结构体指针->成员
	printf("%d\n", pd->price);

	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d\n", b1.price);
	return 0;
}