
# include <iostream>
using namespace std;
# include <string>
						//	�ṹ�����飺���Լ�����Ľṹ��������飬����ά��
						//	struct �ṹ���� ������[Ԫ�ظ���] = { {}, {}, ... };

//	����һ���ṹ��
struct Student {
	string name;
	int age;
	int score;
};

int main2() {
	//	�ṹ������
	struct Student stuArray[3] = {
		{ "����", 18, 80 },
		{ "����", 17, 75 },
		{ "����", 20, 60 }
	};

	/*struct student* p = &stuarray[0];
	for (int i = 0; i < 3; i++) {
		cout << (p + i)->name << "\t" << (p + i)->age << "\t" << (p + i)->score << endl;
	}*/

	//	���ṹ�������е�Ԫ�����Ը�ֵ
	stuArray[2].name = "����";
	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArray[i].name 
			 << "  ���䣺" << stuArray[i].age					//	�����ʱ�����Ϊ���Ű�ֱ�ӻس�����һ��
			<< "  ������" << stuArray[i].score << endl;			//	�������Լ��Ͽո�
	}



	system("pause");
	return 0;
}
