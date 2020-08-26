
#include<iostream>
using namespace std;
#include <string>
							//	结构体指针：通过指针访问结构体的成员
						//	利用		操作符  ->		可以通过结构体指针访问结构体属性
struct Student {
	string name;
	int age;
	int score;
};

int main3() {

	struct Student stu1 = { "张三", 18, 80 };
	Student* p = &stu1;				//	除了定义以外，关键字 struct 可以省略
	cout << "姓名：" << p->name << "  年龄：" << p->age << "  分数：" << p->score << endl;


	system("pause");
	return 0;
}
