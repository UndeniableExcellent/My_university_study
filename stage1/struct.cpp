#include <iostream>
#include <string>
using namespace std;

// struct Student
// {
//     string name;
//     int age;
//     int score;
// };
// int main()
// {
//     /*struct*/Student stu = {"张三", 18, 100};//c++中struct定义的结构体可以省略struct关键字//c语言不能省
//     cout << stu.name << endl;
//     cout << stu.age << endl;
//     cout << stu.score << endl;
//     /*> 总结1：定义结构体时的关键字是struct，不可省略

// > 总结2：创建结构体变量时，关键字struct可以省略

// > 总结3：结构体变量利用操作符 ''.''  访问成员

// */
//     return 0;
// }

// 结构体指针
// int main()
// {

//     struct Student stu = {
//         "张三",
//         18,
//         100,
//     };

//     struct Student *p = &stu;

//     p->score = 80; // 指针通过 -> 操作符可以访问成员

//     cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

//     return 0;
// }

//结构体嵌套结构体
//学生结构体定义
// struct student
// {
// 	//成员列表
// 	string name;  //姓名
// 	int age;      //年龄
// 	int score;    //分数
// };

// //教师结构体定义
// struct teacher
// {
//     //成员列表
// 	int id; //职工编号
// 	string name;  //教师姓名
// 	int age;   //教师年龄
// 	struct student stu; //子结构体 学生
// };


// int main() {

// 	struct teacher t1;
// 	t1.id = 10000;
// 	t1.name = "老王";
// 	t1.age = 40;

// 	t1.stu.name = "张三";
// 	t1.stu.age = 18;
// 	t1.stu.score = 100;

// 	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;
	
// 	cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

// 	return 0;
// }

//结构体做函数参数
//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//值传递
void printStudent(student stu )
{
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;
}

//地址传递
void printStudent2(student *stu)
{
	stu->age = 28;
	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age  << " 分数：" << stu->score << endl;
}

int main() {

	student stu = { "张三",18,100};
	//值传递
	printStudent(stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;

	cout << endl;

	//地址传递
	printStudent2(&stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age  << " 分数：" << stu.score << endl;

	return 0;
}