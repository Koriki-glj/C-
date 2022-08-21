#include<iostream>
using namespace std;

class person1
{
public:
	 int age;

	void showclass()
	{
		cout<< "类名是person1"<<endl;
	};

	void showage()
	{
		if(this==NULL)
		{
			return;            //if段语句保证健壮性
		}

		cout<<"年龄:"<<this->age<<endl;
	}
};



void test01()
{
	person1* p1=NULL; //这是空指针
	p1->showclass(); //空指针，可以调用成员函数
    p1->showage(); //但是如果成员函数中用到了this指针，就不可以了
};

int main()
 {

	test01();
	


	system("pause");

	return 0;
  }