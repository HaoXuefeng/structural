#include <iostream>
using namespace std;
#include <string>

					//	将结构体作为参数向函数中传递：	传递方式有两种：值传递和地址传递
					//	值传递改变的时形参，而不是实参，地址传递会改变实参
struct student {
	string name;
	int age;
	int score;
};

//	值传递
void printStudent1(struct student stu) {
	stu.age = 28;
	cout << "学生姓名：" << stu.name
		<< " 学生年龄：" << stu.age
		<< " 学生分数：" << stu.score << endl;
}
//	地址传递
void printStudent2(struct student* p) {
	p->age = 28;
	cout << "学生姓名：" << p->name
		<< " 学生年龄：" << p->age
		<< " 学生分数：" << p->score << endl;
}

int main5() {
	student stu = { "张三", 18, 80 };
	printStudent1(stu);
	cout << "学生姓名：" << stu.name
		<< " 学生年龄：" << stu.age
		<< " 学生分数：" << stu.score << endl;
	student* p = &stu;
	printStudent2(p);
	cout << "学生姓名：" << p->name
		<< " 学生年龄：" << p->age
		<< " 学生分数：" << p->score << endl;
	system("pause");
	return 0;
}