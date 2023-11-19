//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a, b, c;
//	double tmp;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	//排序
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//判断三角形
//	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c)
//		printf("不能构成三角形\n");
//	else if (a + b > c)
//	{
//		if (a * a + b * b == c * c)
//		{
//			if (fabs(a-b)<=1e-3)
//				printf("能构成等腰直角三角形\n");
//			else
//				printf("能构成直角三角形\n");
//		}
//		else
//		{
//			if (fabs(a-c)<=1e-3)
//				printf("能构成等边三角形\n");
//			else if (fabs(a-b) <= 1e-3 || fabs(b-c) <= 1e-3)
//				printf("能构成等腰三角形\n");
//			else
//				printf("能构成一般三角形\n");
//		}
//	}
//	return 0;
//}