#include <iostream>
using namespace std;
#include <string>
//	学校在做毕设项目，每名老师带5个学生，总共有3名老师，需求如下：
//	设计老师和学生的结构体，其中，在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员；学生的成员有姓名、考试分数；
//	创建数组存放3位老师，通过函数给每个老师及所带的学生赋值，最终打印出老师数据及老师所带学生的数据

//定义学生结构体
struct students {
	string name;
	int score;
};
//定义老师结构体
struct teachers {
	string name;
	struct students stu[5];
};
//定义给学生赋值的函数
void scanfStudents(struct students* stu) {
	cout << "输入学生姓名：" << "\t";
	cin >> stu->name;
	cout << "输入学生成绩：" << "\t";
	cin >> stu->score;
}
//定义给老师赋值的函数
void scanfTeachers(struct teachers* t, struct students* stu) {
	for (int j = 0; j < 3; j++) {
		cout << "输入老师姓名：" << "\t";
		cin >> (t + j)->name;
		for (int i = 0; i < 5; i++) {
			scanfStudents((stu + i));
		}
		cout << endl;
	}
	
}
//定义打印学生数据的函数
void printStudents(const struct students* stu) {
	cout << "\t学生姓名：" << stu->name 
		<< "  学生分数：" << stu->score << endl;
}
//定义打印老师数据的函数
void printTeachers(const struct teachers* t, struct students* stu) {
	for (int j = 0; j < 3; j++) {
		cout << "老师姓名：" << (t + j)->name << endl;
		cout << "他的学生们的信息：" << endl;
		for (int i = 0; i < 5; i++) {
			printStudents(stu + i);
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	students stu[5];
	teachers t[3];
	cout << "开始输入数据：" << endl;
	scanfTeachers(t, stu);
	cout << "输入结束，开始打印数据：" << endl;
	printTeachers(t, stu);

	system("pause");
	return 0;
}