#include <iostream>
using namespace std;
#include <string>

						//	�ṹ��Ƕ�׽ṹ�壺�ṹ���еĳ�Ա��������һ���ṹ��
			//	���磺ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��
//	����ѧ���ṹ��
struct student {
	string name;
	int age;
	int score;
};
//	������ʦ�ṹ��
struct teacher {
	int id;			//����
	string name;
	int age;
	struct student stu;		//	�ӽṹ�壬ѧ��
};
int main4() {
	student stu = { "����",18,80 };
	student* p1 = &stu;
	teacher t = { 123,"����", 45, stu };
	teacher* p2 = &t;
	p2->stu.name = "����";	//	������ֻ��ı���ʦ����ṹ���ڲ���ѧ��������������ı�ѧ���ṹ���е�����
	cout << "ѧ��������" << p1->name 
		<< " ѧ�����䣺" << p1->age 
		<< " ѧ��������" << p1->score << endl;
	cout << "��ʦ���ţ�" << p2->id
		<< " ��ʦ������" << p2->name
		<< " ��ʦ���䣺" << p2->age << "\n"
		<< " ��ʦ��ѧ��������" << p2->stu.name	//	���ﲻ����	p2->p1->name,Ϊʲô��
		<< " ��ʦ��ѧ�����䣺" << p2->stu.age 
		<< " ��ʦ��ѧ��������" << p2->stu.score << endl;

	system("pause");
	return 0;
}