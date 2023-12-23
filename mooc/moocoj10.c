/*1学生平均成绩计算和输出（10分）
题目内容：

利用结构体数组保存不超过10个学生的信息，每个学生的信息包括：学号、姓名和三门课(高数、物理和英语 )的成绩和平均分(整型)。
编写程序,从键盘输入学生的人数,然后依次输入每个学生的学号、姓名和3门课的成绩
然后计算每个学生的平均分
最后按指定格式输出每个学生的平均分
输入格式:
先输入一个整数,表示学生个数
然后每行输入一个学生的信息:学号、姓名和高数、物理及英语成绩
输出格式：
输出每个学生的平均分.printf中请用格式控制串"The average score of the %dth student is %d.\n"
输入样例：

5

1001 Zhang 100 90 80

1002 Wu 93 90 98

1003 Zhu 89 88 87

1004 Hu 90 98 98

1005 Wang 90 98 97

输出样例：

The average score of the 1th student is 90.

The average score of the 2th student is 93.

The average score of the 3th student is 88.

The average score of the 4th student is 95.

The average score of the 5th student is 95*/

#include <stdio.h>
struct Student
{
	int num;
	char name[10];
	int math;
	int physics;
	int english;
	int sum;
	float aver;
};

int main()
{
	int n;
	scanf("%d", &n);
	struct Student stu[10];
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s %d %d %d", &stu[i].num, stu[i].name, &stu[i].math, &stu[i].physics, &stu[i].english);
		stu[i].sum = stu[i].math + stu[i].physics + stu[i].english;
		stu[i].aver = stu[i].sum / 3.0;
	}
	for (int i = 0; i < n; i++)
	{
		printf("The average score of the %dth student is %d.\n", i + 1, (int)stu[i].aver);//这里要强制转换（int），以%d打印
	}
    return 0;
}
