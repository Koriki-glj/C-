#include<iostream>
using namespace std;

class person1
{
public:
	 int age;

	void showclass()
	{
		cout<< "������person1"<<endl;
	};

	void showage()
	{
		if(this==NULL)
		{
			return;            //if����䱣֤��׳��
		}

		cout<<"����:"<<this->age<<endl;
	}
};



void test01()
{
	person1* p1=NULL; //���ǿ�ָ��
	p1->showclass(); //��ָ�룬���Ե��ó�Ա����
    p1->showage(); //���������Ա�������õ���thisָ�룬�Ͳ�������
};

int main()
 {

	test01();
	


	system("pause");

	return 0;
  }