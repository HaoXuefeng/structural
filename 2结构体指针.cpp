
#include<iostream>
using namespace std;
#include <string>
							//	�ṹ��ָ�룺ͨ��ָ����ʽṹ��ĳ�Ա
						//	����		������  ->		����ͨ���ṹ��ָ����ʽṹ������
struct Student {
	string name;
	int age;
	int score;
};

int main3() {

	struct Student stu1 = { "����", 18, 80 };
	Student* p = &stu1;				//	���˶������⣬�ؼ��� struct ����ʡ��
	cout << "������" << p->name << "  ���䣺" << p->age << "  ������" << p->score << endl;


	system("pause");
	return 0;
}
