#include <iostream>
using namespace std;
#include <string>

					//	���ṹ����Ϊ���������д��ݣ�	���ݷ�ʽ�����֣�ֵ���ݺ͵�ַ����
					//	ֵ���ݸı��ʱ�βΣ�������ʵ�Σ���ַ���ݻ�ı�ʵ��
struct student {
	string name;
	int age;
	int score;
};

//	ֵ����
void printStudent1(struct student stu) {
	stu.age = 28;
	cout << "ѧ��������" << stu.name
		<< " ѧ�����䣺" << stu.age
		<< " ѧ��������" << stu.score << endl;
}
//	��ַ����
void printStudent2(struct student* p) {
	p->age = 28;
	cout << "ѧ��������" << p->name
		<< " ѧ�����䣺" << p->age
		<< " ѧ��������" << p->score << endl;
}

int main5() {
	student stu = { "����", 18, 80 };
	printStudent1(stu);
	cout << "ѧ��������" << stu.name
		<< " ѧ�����䣺" << stu.age
		<< " ѧ��������" << stu.score << endl;
	student* p = &stu;
	printStudent2(p);
	cout << "ѧ��������" << p->name
		<< " ѧ�����䣺" << p->age
		<< " ѧ��������" << p->score << endl;
	system("pause");
	return 0;
}