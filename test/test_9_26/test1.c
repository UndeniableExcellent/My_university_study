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
//	printf("%d\n", sizeof(pd));//ָ�������С32λ�豸32������λ4���ֽڣ�64ƽ̨8���ֽ�
//
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int* p = &a;//p��ָ�����
//	//printf("%p\n", p);
//	//*p = 20;//*�����ò���������ӷ��ʲ�����
//	//printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("hello,world!");
//	//getchar();
//	return 0;
//}


//�ṹ��---�������Ӷ���
struct Book
{
	char name[20];//C���Գ������  
	short price;//55
};

int main()
{
	struct Book b1 = { "C���Գ������",55 };//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	/*b1.name = "C++"*///name��������,�����Ǹ���ַ������ֱ�Ӹ�
	strcpy(b1.name, "C++");
	printf("%s\n", b1.name);//���ַ�����strcpy�⺯��string.h
	struct Book* pd = &b1;
	printf("%s\n", (*pd).name);//()������ .���������ȼ��ܸ�
	printf("%d\n", (*pd).price);//.�ṹ�����.��Ա
	printf("%s\n", pd->name);//��ͷ->  �ṹ��ָ��->��Ա
	printf("%d\n", pd->price);

	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);
	return 0;
}