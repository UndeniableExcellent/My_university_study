#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。*/
struct Hero
{
    string name;
    int age;
    string sex;
};
void bubbleSort(Hero arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j].age>arr[j+1].age)
            {
                temp=arr[j].age;
                arr[j].age=arr[j+1].age;
                arr[j+1].age=temp;
            }
        }
    }
}
void printarr(Hero arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"姓名："<<arr[i].name<<" 年龄："<<arr[i].age<<" 性别："<<arr[i].sex<<endl;
    }
}
int main()
{
    Hero arr[5]=
    {
        {"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
    };
    bubbleSort(arr,5);
    printarr(arr,5);
    return 0;
}