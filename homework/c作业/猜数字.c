#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//��������Ϸ
//1.��������һ�������
//2.������

void menu()
{
	printf("*************************************\n");
	printf("**1.play  *********0.exit  **********\n");
	printf("*************************************\n");

}

void game()
{
	int ret = 0,guess=0;
	//1.����1-100�����
	//��ʱ���������������������
	//ʱ���//ʱ����Ǵ�1970��1��1�գ�UTC/GMT����ҹ����ʼ�����������������������롣
	ret = rand()%100+1;//���������//srand���������������
	//printf("%d\n", ret);
	//2.������
	while (1) {
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else {
			printf("��ϲ�㣬�¶���\n");
			break;

		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			printf("������\n");
			game();
			break;
		case(0):
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}

	} while(input);
	return 0;
}
