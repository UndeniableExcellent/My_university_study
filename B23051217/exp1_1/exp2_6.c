//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a, b, c;
//	double tmp;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	//����
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
//	//�ж�������
//	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c)
//		printf("���ܹ���������\n");
//	else if (a + b > c)
//	{
//		if (a * a + b * b == c * c)
//		{
//			if (fabs(a-b)<=1e-3)
//				printf("�ܹ��ɵ���ֱ��������\n");
//			else
//				printf("�ܹ���ֱ��������\n");
//		}
//		else
//		{
//			if (fabs(a-c)<=1e-3)
//				printf("�ܹ��ɵȱ�������\n");
//			else if (fabs(a-b) <= 1e-3 || fabs(b-c) <= 1e-3)
//				printf("�ܹ��ɵ���������\n");
//			else
//				printf("�ܹ���һ��������\n");
//		}
//	}
//	return 0;
//}