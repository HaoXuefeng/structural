#include <iostream>
using namespace std;
#include <string>
							//	const	��ֹ�����
//����ṹ��
struct student {
	string name;
	int age;
	int score;
};
//�йؽṹ��ĺ���
void printStudent(const struct student *stu) {	//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ�ã����Ҳ��Ḵ��һ���µĸ�������
	
	//stu->age = 66;		//��ַ������Ȼ���Լ����ڴ�ռ�ã�����Ҳ���ܻ�ı�ʵ��
	//����const֮��ֱ�ӱ�����Ϊconst���εı������ܱ��ı�
	cout << stu->name << "\t" << stu->age << "\t" << stu->score << endl;
}

int main6() {
	//	�����ṹ�����
	struct student stu = { "����", 18, 80 };
	printStudent(&stu);		//	����д���Բ��ö���ָ�룬ֱ�Ӵ���ַ

	cout << "��main�У������������ǣ�" << stu.age << endl;


	system("pause");
	return 0;
}
