#include <iostream>
#include <string>
using namespace std;

//	设计一个英雄的结构体，包括姓名、年龄、性别，创建结构体数组，存放5名英雄
//通过冒泡排序的算法，将数组里的英雄按照年龄升序排列，最终打印排序后的结果
//五名英雄信息如下：
				/*	刘备，23，男
					关羽，22，男
					张飞，20，男
					赵云，21，男
					貂蝉，19，女*/
//定义英雄结构体
struct heros {
	string name;
	int age;
	string gender;
};
//冒泡排序,因为要改变实参的顺序，所以传入地址
void bubbleSort(struct heros hArr[], int len) {		//	数组名直接代表了地址！ 别去想指针的事情了！
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
//打印英雄的函数
void printHeros(struct heros* h, int len) {
	for (int i = 0; i < len; i++) {
		cout << "英雄姓名：" << (h + i)->name 
			<< "\t英雄年龄：" << (h + i)->age 
			<< "\t英雄性别：" << (h + i)->gender << endl;
	}
}

int main() {
	struct heros hArray[5] = {
		{ "刘备", 23, "男" },
		{ "关羽", 22, "男" },
		{ "张飞", 20, "男" },
		{ "赵云", 21, "男" },
		{ "貂蝉", 19, "女" },
	};
	int len = sizeof(hArray) / sizeof(heros);		//	这样也可以直接获取数组长度

	bubbleSort(hArray, len);
	printHeros(hArray, len);

	system("pause");
	return 0;
}