/*某班有学生若干名（不超过40名），其信息的组织采用如下的结构体定义。编写程序exp9_2.c，完成要求的功能。
struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};
① 从键盘读入该班级学生的信息。
② 将所有的学生信息存入D:\Info.dat文件中、关闭该文件，建立文件定义函数CreateFile实现。
③　另写一个函数ReadOut，将D:\Info.dat文件中的信息读入到内存，并依次输出到显示器上，该函数由main函数调用。
④编写函数Sort，实现按成绩由高到低将学生记录进行排序并输出排序后的结果。
⑤文件读写采用二进制读写（fread、fwrite）方式。
某班有学生若干名（不超过40名），其信息的组织采用如下的结构体定义。编写程序exp9_2.c，完成要求的功能。
struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};
① 从键盘读入该班级学生的信息。
② 将所有的学生信息存入D:\Info.dat文件中、关闭该文件，建立文件定义函数CreateFile实现。
③　另写一个函数ReadOut，将D:\Info.dat文件中的信息读入到内存，并依次输出到显示器上，该函数由main函数调用。
④编写函数Sort，实现按成绩由高到低将学生记录进行排序并输出排序后的结果。
⑤文件读写采用二进制读写（fread、fwrite）方式。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};

void CreateFile(struct Student stu[], int n)
{
	FILE *fp;
	fp = fopen("D:\\Info.dat", "wb");
	fwrite(stu, sizeof(struct Student), n, fp);
	fclose(fp);
}

void ReadOut(struct Student stu[], int n)
{
	int i;
	FILE *fp;
	fp = fopen("D:\\Info.dat", "rb");
	for (i = 0; i < n; i++)
	{
		fread(&stu[i], sizeof(struct Student), 1, fp);
		printf("%s %s %d %.1f\n", stu[i].ID, stu[i].name, stu[i].age, stu[i].score);
	}
	fclose(fp);
}

void Sort(struct Student stu[], int n)//冒泡排序,从高到低排序
{
	int i, j;
	struct Student temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (stu[j].score < stu[j + 1].score)
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int n, i;
	struct Student stu[100];
	// printf("请输入学生人数：");
	// scanf("%d", &n);
	// printf("请输入学生信息：\n");
	// for (i = 0; i < n; i++)
	// {
	// 	scanf("%s%s%d%lf", stu[i].ID, stu[i].name, &stu[i].age, &stu[i].score);
	// }
	// CreateFile(stu, n);
	ReadOut(stu, n);
	Sort(stu, n);
    // CreateFile(stu, n);
	printf("\n排序后的学生信息:\n");
	ReadOut(stu, n);
	return 0;
}