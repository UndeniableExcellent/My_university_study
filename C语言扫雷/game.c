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
	//打印列号
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
		printf("%d |", i);//打印行号
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
		
		int x = (rand() % row) + 1;//生成1-9的坐标
		int y = (rand() % col) + 1;//
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)//计算x,y坐标周围有几个雷
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

void PartShow(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)//展开一片雷的信息
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
	//通过计算'*'的个数来判断是否排雷成功
	//int win = 0;//win<row*col-EASY_COUNT//win == row * col - EASY_COUNT
	while (remain!=EASY_COUNT) {
		printf("请输入排查雷的坐标:>");
		reinput:
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已经被排查过，请输入其他坐标:>");
				goto reinput;
			}
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//不是雷
			{
				//计算x,y坐标周围有几个雷
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
						remain++;//计算剩余'*'的个数
				}
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入!\n");
		}
	}
	if (remain==EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}