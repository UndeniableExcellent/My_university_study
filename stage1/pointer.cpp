#include <iostream>
using namespace std;
// int main()
// {
//     int a=10;
//     int *p=&a;
//     cout<<*p<<endl;
//     cout<<sizeof(p)<<endl;//六十四位操作系统指针占八个字节
//     return 0;
// }

/*1. const修饰指针   --- 常量指针
2. const修饰常量   --- 指针常量
3. const即修饰指针，又修饰常量*/
// int main() {

// 	int a = 10;
// 	int b = 10;

// 	//const修饰的是指针，指针指向可以改，指针指向的值不可以更改
// 	const int * p1 = &a; //常量指针//const是常量，*是指针
// 	p1 = &b; //正确
// 	//*p1 = 100;  报错
	

// 	//const修饰的是常量，指针指向不可以改，指针指向的值可以更改
// 	int * const p2 = &a;//指针常量
// 	//p2 = &b; //错误
// 	*p2 = 100; //正确

//     //const既修饰指针又修饰常量
// 	const int * const p3 = &a;
// 	//p3 = &b; //错误
// 	//*p3 = 100; //错误

// 	system("pause");

// 	return 0;
// }



//指针和数组
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    // for(int i=0;i<5;i++)
    //     cout<<*(p+i)<<"\t";
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<"\t";
    }
    cout<<endl;
    return 0;
}