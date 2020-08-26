#include <iostream>
#include <string>
using namespace std;

//	���һ��Ӣ�۵Ľṹ�壬�������������䡢�Ա𣬴����ṹ�����飬���5��Ӣ��
//ͨ��ð��������㷨�����������Ӣ�۰��������������У����մ�ӡ�����Ľ��
//����Ӣ����Ϣ���£�
				/*	������23����
					����22����
					�ŷɣ�20����
					���ƣ�21����
					������19��Ů*/
//����Ӣ�۽ṹ��
struct heros {
	string name;
	int age;
	string gender;
};
//ð������,��ΪҪ�ı�ʵ�ε�˳�����Դ����ַ
void bubbleSort(struct heros hArr[], int len) {		//	������ֱ�Ӵ����˵�ַ�� ��ȥ��ָ��������ˣ�
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (hArr[j].age > hArr[j + 1].age) {
				heros temp;
				temp = hArr[j];
				hArr[j] = hArr[j + 1];
				hArr[j + 1] = temp;
			}
		}
	}
}
//��ӡӢ�۵ĺ���
void printHeros(struct heros* h, int len) {
	for (int i = 0; i < len; i++) {
		cout << "Ӣ��������" << (h + i)->name 
			<< "\tӢ�����䣺" << (h + i)->age 
			<< "\tӢ���Ա�" << (h + i)->gender << endl;
	}
}

int main() {
	struct heros hArray[5] = {
		{ "����", 23, "��" },
		{ "����", 22, "��" },
		{ "�ŷ�", 20, "��" },
		{ "����", 21, "��" },
		{ "����", 19, "Ů" },
	};
	int len = sizeof(hArray) / sizeof(heros);		//	����Ҳ����ֱ�ӻ�ȡ���鳤��

	bubbleSort(hArray, len);
	printHeros(hArray, len);

	system("pause");
	return 0;
}