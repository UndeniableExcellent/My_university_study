#define _CRT_SECURE_NO_WARNINGS 1
static int g_val = 2020;//static修饰全局变量改变了变量的作用域。静态全局变量只能在自己所在的源文件使用


static int Add(int x, int y)//static修饰函数，改变了函数的链接属性，只能内部链接
{
	int z = x + y;
	return z;
}