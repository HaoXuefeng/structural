#include <iostream>
using namespace std;
#include <string>
//	ѧУ����������Ŀ��ÿ����ʦ��5��ѧ�����ܹ���3����ʦ���������£�
//	�����ʦ��ѧ���Ľṹ�壬���У�����ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա��ѧ���ĳ�Ա�����������Է�����
//	����������3λ��ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ�����մ�ӡ����ʦ���ݼ���ʦ����ѧ��������

//����ѧ���ṹ��
struct students {
	string name;
	int score;
};
//������ʦ�ṹ��
struct teachers {
	string name;
	struct students stu[5];
};
//�����ѧ����ֵ�ĺ���
void scanfStudents(struct students* stu) {
	cout << "����ѧ��������" << "\t";
	cin >> stu->name;
	cout << "����ѧ���ɼ���" << "\t";
	cin >> stu->score;
}
//�������ʦ��ֵ�ĺ���
void scanfTeachers(struct teachers* t, struct students* stu) {
	for (int j = 0; j < 3; j++) {
		cout << "������ʦ������" << "\t";
		cin >> (t + j)->name;
		for (int i = 0; i < 5; i++) {
			scanfStudents((stu + i));
		}
		cout << endl;
	}
	
}
//�����ӡѧ�����ݵĺ���
void printStudents(const struct students* stu) {
	cout << "\tѧ��������" << stu->name 
		<< "  ѧ��������" << stu->score << endl;
}
//�����ӡ��ʦ���ݵĺ���
void printTeachers(const struct teachers* t, struct students* stu) {
	for (int j = 0; j < 3; j++) {
		cout << "��ʦ������" << (t + j)->name << endl;
		cout << "����ѧ���ǵ���Ϣ��" << endl;
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
	cout << "��ʼ�������ݣ�" << endl;
	scanfTeachers(t, stu);
	cout << "�����������ʼ��ӡ���ݣ�" << endl;
	printTeachers(t, stu);

	system("pause");
	return 0;
}