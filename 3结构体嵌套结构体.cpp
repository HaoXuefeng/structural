#include <iostream>
using namespace std;
#include <string>

						//	结构体嵌套结构体：结构体中的成员可以是另一个结构体
			//	例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
//	定义学生结构体
struct student {
	string name;
	int age;
	int score;
};
//	定义老师结构体
struct teacher {
	int id;			//工号
	string name;
	int age;
	struct student stu;		//	子结构体，学生
};
int main4() {
	student stu = { "张三",18,80 };
	student* p1 = &stu;
	teacher t = { 123,"李四", 45, stu };
	teacher* p2 = &t;
	p2->stu.name = "李三";	//	这样做只会改变老师这个结构体内部的学生姓名，并不会改变学生结构体中的内容
	cout << "学生姓名：" << p1->name 
		<< " 学生年龄：" << p1->age 
		<< " 学生分数：" << p1->score << endl;
	cout << "老师工号：" << p2->id
		<< " 老师姓名：" << p2->name
		<< " 老师年龄：" << p2->age << "\n"
		<< " 老师的学生姓名：" << p2->stu.name	//	这里不能用	p2->p1->name,为什么？
		<< " 老师的学生年龄：" << p2->stu.age 
		<< " 老师的学生分数：" << p2->stu.score << endl;

	system("pause");
	return 0;
}