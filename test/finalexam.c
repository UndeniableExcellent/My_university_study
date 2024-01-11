//选择排序
#include <stdio.h>
void select_sort(int a[],int n)
{
    int i,j,index,temp;
    for(i=0;i<n-1;i++)
    {
        index=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<a[index])
            {
                index=j;
            }
        }
        if(index!=i)
        {
            temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }
}
//冒泡排序
void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        int flag=1;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
}
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    //select_sort(a,10);
    bubble_sort(a,10);
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}