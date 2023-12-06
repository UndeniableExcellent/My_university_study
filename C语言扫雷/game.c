#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = '0';
		}
	}
	for (i = 1; i <= ROW; i++)
	{
		for (j = 1; j <= COL; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		if (i == 0)
			printf("%d |", i);
		else
			printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("__");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d |", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		
		int x = (rand() % row) + 1;//����1-9������
		int y = (rand() % col) + 1;//
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)//����x,y������Χ�м�����
{
	return (mine[x - 1][y] + 
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}

void PartShow(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//չ��һƬ�׵���Ϣ
{
	if (show[x][y] == '*')
	{
		int count = get_mine_count(mine, x, y);
		if (count == 0)
		{
			show[x][y] = count + '0';
			PartShow(mine, show, x - 1, y);
			//PartShow(mine, show, x - 1, y-1);
			PartShow(mine, show, x, y-1);
			//PartShow(mine, show, x +1, y-1);
			PartShow(mine, show, x + 1, y);
			//PartShow(mine, show, x + 1, y+1);
			PartShow(mine, show, x, y+1);
			//PartShow(mine, show, x - 1, y+1);

		}
		else
		{
			show[x][y] = count + '0';
		}
	}
}

void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int i, j;
	int remain = 0;
	//ͨ������'*'�ĸ������ж��Ƿ����׳ɹ�
	//int win = 0;//win<row*col-EASY_COUNT//win == row * col - EASY_COUNT
	while (remain!=EASY_COUNT) {
		printf("�������Ų��׵�����:>");
		reinput:
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�������Ѿ����Ų������������������:>");
				goto reinput;
			}
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//������
			{
				//����x,y������Χ�м�����
				int count = get_mine_count(mine, x, y);
				//show[x][y] = count + '0';
				PartShow(mine, show, x, y);
				DisplayBoard(show, ROW, COL);
				//win++;
			}
			remain = 0;
			for (i = 1; i <= row; i++)
			{
				for (j = 1; j <= col; j++)
				{
					if (show[i][j] == '*')
						remain++;//����ʣ��'*'�ĸ���
				}
			}
		}
		else
		{
			printf("��������Ƿ�������������!\n");
		}
	}
	if (remain==EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}