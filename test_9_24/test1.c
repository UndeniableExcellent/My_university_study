#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

////ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0):");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//
//}


////whileѭ��
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("��offer\n");
//
//	return 0;
//}


////����
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

//����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	char arr2[20];
//	//printf("%d\n", arr[4]);//�±귽ʽ����Ԫ��
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
//	//&��λ��  |��λ��  ^��λ���-��Ӧ�Ķ�����λ��ͬΪ0��������Ϊ1
//	//011
//	//101
//	//001//111//110
//
//
//	printf("%d\n", c);
//	
//	
//	int d = 0;//b���з��ŵ����� ���λ��ʾ����
//	int e = ~d;  //��λȡ�� ������0/1�෴//����,�������ڴ��д洢ʱ�洢��ʱ�����ƵĲ���
//	printf("%d\n", e);//��ӡ����ԭ��//Դ��------>����------->����
//	//����Դ�뷴�벹����ͬ//                    Դ�����λ��������λȡ���÷���//����Ϊ����+1
//	return 0;
//}

//��Ŀ������  sizeof�������/������ռ���ʹ�С����λ�ֽ�
//˫Ŀ������
//��Ŀ������

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++  ��ʹ����++
//	int b = ++a;//ǰ��++  ��++��ʹ��
//	printf("a = %d b = %d\n", a, b);
//	int c = (int)3.14;//(���ͣ�ǿ������ת��
//
//	return 0;
//}

//��ϵ������==  ��=   >=
//�߼������� &&�߼���  ||�߼���

//����������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//��Ŀ������
//	printf("%d\n", max);
//	return 0;
//}
//���ű��ʽ

//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]�±����ò�����
//	return 0;//�����������ò�����
//}

//void test()
//{
//	//int a = 1;//a�Ǿֲ������������������������ڿ�ʼ���������������� ���5��2
//	static int a = 1;//a�Ǿ�̬�ľֲ����� ���23456//static���ξֲ��������ֲ������������ڱ䳤
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
//	extern int g_val;  //extern�����ⲿ����
//	printf("g_val = %d", g_val);
//	return 0;
//}

//extern Add(int, int);//�����ⲿ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d", sum);
//	return 0;
//}
//

//#define �����ʶ������
//#define MAX 100
//#define ���Զ����-������
#define MAX(X,Y) (X>Y?X:Y)//��Ķ���

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
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;//������ŵ�ַ�ı���--ָ�����
//	printf("%p\n", &a);//&ȡ��ַ�����
//	printf("%p\n", p);
//	*p=20;//*�����ò�����
//	printf("a = %d",a );
//
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;//��ַ64λƽ̨һ��ָ��Ĵ�СΪ64������λ��8���ֽ�
	printf("%d\n", sizeof(pc));
	*pc = 'a';
	printf("%c\n", ch);
	return 0;
}