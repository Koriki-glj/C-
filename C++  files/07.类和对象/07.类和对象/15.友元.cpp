#include<iostream>
using namespace std;
#include<string>
class biluding
{
friend	void showsettingroom(biluding* b1); //声明这个全局函数，以友元的身份访问

private:
	string m_bedroom;
public:
	string m_settingroom;
	//构造函数
	biluding()
	{
		m_bedroom="卧室";
		m_settingroom="客厅";
	}
};

////全局函数
	void showsettingroom(biluding* b1)
	{
		cout<< "好朋友正在访问  "<< b1->m_settingroom<<endl;

			cout<< "好朋友正在访问  "<< b1->m_bedroom<<endl;
	};


void test01()

	{
		biluding p;
		showsettingroom(&p);
	};



int main()
 {

	test01();
	


	system("pause");

	return 0;
  }