#include<iostream>
using namespace std;
#include<string>

class biluding
{
	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
	friend class goodguy;
private:
	string m_bedroom;
public:
	string m_settingroom;
	biluding();


};

class goodguy
{
public:
	goodguy();
	void visit()
	{
		cout<<"好朋友正在访问 "<<b1->m_settingroom<<endl;
		cout<<"好朋友正在访问 "<<b1->m_bedroom<<endl;
	}
private:
	biluding* b1;  //用biluding类建造了一个指针
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

void test01()
{
	goodguy p;
	p.visit();
};

int main()
 {
	 test01();
	
	


	system("pause");

	return 0;
  }