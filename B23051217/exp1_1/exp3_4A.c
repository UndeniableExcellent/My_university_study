//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int x = 0, i = 0, a, b, count = 0;
//reinput:
//	scanf("%d%d", &a, &b);
//	if (a < 10 || a>1000 || b < 10 || b>1000 || a > b)
//	{
//		printf("输入数据无效，请重新输入");
//		goto reinput;
//	}
//	else
//	{
//		for (x = a; x <= b; x++)
//		{
//			for (i = 2; i * i <= x; i++)
//			{
//				if (x % i == 0)
//					break;
//			}
//			if (i * i > x)
//			{
//				printf("%d ", x);
//				count++;
//				if (count%5 == 0)
//					printf("\n");
//			}
//		}
//	}
//	return 0;
//}