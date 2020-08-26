
# include <iostream>
using namespace std;
# include <string>
						//	结构体数组：将自己定义的结构体放入数组，方便维护
						//	struct 结构体名 数组名[元素个数] = { {}, {}, ... };

//	定义一个结构体
struct Student {
	string name;
	int age;
	int score;
};

int main2() {
	//	结构体数组
	struct Student stuArray[3] = {
		{ "张三", 18, 80 },
		{ "李四", 17, 75 },
		{ "王五", 20, 60 }
	};

	/*struct student* p = &stuarray[0];
	for (int i = 0; i < 3; i++) {
		cout << (p + i)->name << "\t" << (p + i)->age << "\t" << (p + i)->score << endl;
	}*/

	//	给结构体数组中的元素属性赋值
	stuArray[2].name = "赵六";
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stuArray[i].name 
			 << "  年龄：" << stuArray[i].age					//	输出的时候可以为了排版直接回车到下一行
			<< "  分数：" << stuArray[i].score << endl;			//	甚至可以加上空格
	}



	system("pause");
	return 0;
}
