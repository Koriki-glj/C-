#include<iostream>
using namespace std;
#include<string>
class biluding;

class goodguy
{
public:
	goodguy();
void visit1();
void visit2();
private:
	biluding* b1;  //用biluding类建造了一个指针
};

class biluding
{
friend	void  goodguy::visit1();  //成员函数
private:
	string m_bedroom;
public:
	string m_settingroom;
	biluding();


};



//goodguy的构造函数,在类外写成员函数
goodguy::goodguy()
{
	//新建biluding对象
b1=new biluding;
};
//biluding的构造函数
biluding::biluding()
{
	m_bedroom="卧室";
	m_settingroom="客厅";
};
void goodguy::visit1()
	{
		cout<<"好朋友正在访问 "<<b1->m_bedroom<<endl;
		cout<<"好朋友正在访问 "<<b1->m_settingroom<<endl;
	};

	void goodguy::visit2()
	{
		//cout<<"好朋友正在访问 "<<b1->m_bedroom<<endl;
	}
void test01()
{
	goodguy p;
	p.visit1();
	p.visit2();
};

int main()
 {
	 test01();

	system("pause");

	return 0;
  }