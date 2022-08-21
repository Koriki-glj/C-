#include<iostream>
using namespace std;
#include<string>

	struct stu
	{
		string name;
			int age;
			int score;
	};

int main()
 {

	 stu arr[3]=
	 {
		{"张三",18,80 },
		{"李四",19,60 },
		{"王五",20,70 }
	 };

	 arr[1].age=11;
	
	 	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
	}



		/**作用：**通过指针访问结构体中的成员



* 利用操作符 `-> `可以通过结构体指针访问结构体属性*/
	struct stu stu2= { "张三",18,100, };
	
	struct stu * p = &stu2;
	
	p->score = 80; //指针通过 -> 操作符可以访问成员

	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
	system("pause");

	return 0;
  }