#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
/*学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。*/
struct Student
{
    string name;
    int score;
};
struct Teacher
{
    string name;
    Student sarray[5];
};
void allocateSpace(Teacher tarray[],int len)
{
    string tname="老师";
    string sname="学生";
    string nameseed="ABCDE";
    for(int i=0;i<len;i++)
    {
        tarray[i].name=tname+nameseed[i];
        for(int j=0;j<5;j++)
        {
            tarray[i].sarray[j].name=sname+nameseed[j];
            tarray[i].sarray[j].score=rand()%101;
        }
    }
}

void printteacher(Teacher tarray[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"老师姓名："<<tarray[i].name<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"学生姓名："<<tarray[i].sarray[j].name<<" 学生分数："<<tarray[i].sarray[j].score<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    Teacher tarray[3];
    int len=sizeof(tarray)/sizeof(tarray[0]);
    allocateSpace(tarray,len);
    printteacher(tarray,len);
    return 0;
}