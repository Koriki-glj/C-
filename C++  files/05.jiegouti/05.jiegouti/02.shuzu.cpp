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
		{"����",18,80 },
		{"����",19,60 },
		{"����",20,70 }
	 };

	 arr[1].age=11;
	
	 	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
	}



		/**���ã�**ͨ��ָ����ʽṹ���еĳ�Ա



* ���ò����� `-> `����ͨ���ṹ��ָ����ʽṹ������*/
	struct stu stu2= { "����",18,100, };
	
	struct stu * p = &stu2;
	
	p->score = 80; //ָ��ͨ�� -> ���������Է��ʳ�Ա

	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
	system("pause");

	return 0;
  }