#include <iostream>
using namespace std;
#include <string>
							//	const	防止误操作
//定义结构体
struct student {
	string name;
	int age;
	int score;
};
//有关结构体的函数
void printStudent(const struct student *stu) {	//将函数中的形参改为指针，可以减少内存占用，而且不会复制一个新的副本出来
	
	//stu->age = 66;		//地址传递虽然可以减少内存占用，但是也可能会改变实参
	//加上const之后，直接报错，因为const修饰的变量不能被改变
	cout << stu->name << "\t" << stu->age << "\t" << stu->score << endl;
}

int main6() {
	//	创建结构体变量
	struct student stu = { "张三", 18, 80 };
	printStudent(&stu);		//	这样写可以不用定义指针，直接传地址

	cout << "在main中，张三的年龄是：" << stu.age << endl;


	system("pause");
	return 0;
}
