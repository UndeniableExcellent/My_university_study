#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> //����stdio.h�ļ� standard input output
//int main() //������-��������
//{
//	printf("hello world\n");
//	return 0;
//}
//char�ַ���������
//%c-��ӡ�ַ���ʽ������
//%d-��ӡ����ʮ��������
//%f-��ӡ������
//%p�Ե�ַ��ʽ��ӡ
//%n-��ӡ16��������
// %s-��ӡ�ַ���
//int main()
//{
//	char ch = 'A';//�ڴ�
//	printf("%c\n", ch);//%c��ӡ�ַ���ʽ������
//	int age = 20;
//	printf("%d\n",age);//%d��ӡ����ʮ��������
//	//short int������
//	//lon������
//	long num = 100;
//	printf("%d\n", num);
//	//double-˫���ȸ�����
//	double d = 3.14;
//	printf("%lf\n", d);//%lf��ӡ˫���ȸ�����
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
//int num2 = 20;//ȫ�ֱ��������ڴ����{}��ı���
//int main()
//{
//	int num1 = 10;//�ֲ����������ڴ������//�ֲ�������ȫ�ֱ�����ͬ���������飬�ֲ���������
//	printf("%d\n", num1);
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	//���뺯��scanf
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	int sum = 0;
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	extern int g_val;//extern�����ⲿ����
//	printf("%d\n", g_val);
//	return 0;
//	
//}
//int main()
//{
//	const int num = 4;//const ������ const���εĳ�����  �����ϻ��Ǳ��� �г�����
//	printf("%d\n", num);
//}
//#define MAX 10//define����ı�ʶ������
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//
////ö�ٳ��� ö�ٹؼ���enum
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

//�ַ���-˫�����������Ľ��ַ���
//int main()
//{
//	char arr1[] = "abc";//����//�ַ���ĩβĬ�Ϸ�һ��\0-�ַ���������־
//	char arr2[] = { 'a','b','c'};  //''������������ַ�char
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//strlen�����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//ת���ַ�
int main()
{
	printf("abc\n");//\n����  \tˮƽ�Ʊ��
	printf("D:\\vs_2022\\Common7\\IDE\\VC\\VCProjectItems\n");//\\��ʾһ����б�ܣ���ֹ\������ת���ַ�
	printf("%d\n", strlen("c:\test\32\test.c"));//����13  \t,\32,\t����һ���ַ�
	printf("%c\n", '\32');//\32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	printf("%c\n", '\x61');//\x61��ʾʮ������תΪʮ������ΪASCII����Ӧ���ַ�
	return 0;               
}
