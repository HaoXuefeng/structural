# include <iostream>
using namespace std;
#include <string>

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
}stu3; //�ṹ�����������ʽ3 


int main1() {

	//�ṹ�����������ʽ1
	struct student stu1; //struct �ؼ����ڴ�����ʱ�����ʡ�ԣ������ʱ����ʡ�ԣ�

	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;

	cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;

	//�ṹ�����������ʽ2
	struct student stu2 = { "����",19,60 };		//Ҫ���ն����˳������

	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;

	stu3.name = "����";
	stu3.age = 18;
	stu3.score = 80;

	cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;

	system("pause");

	return 0;
}