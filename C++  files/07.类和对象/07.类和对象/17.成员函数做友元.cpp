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
	biluding* b1;  //��biluding�ཨ����һ��ָ��
};

class biluding
{
friend	void  goodguy::visit1();  //��Ա����
private:
	string m_bedroom;
public:
	string m_settingroom;
	biluding();


};



//goodguy�Ĺ��캯��,������д��Ա����
goodguy::goodguy()
{
	//�½�biluding����
b1=new biluding;
};
//biluding�Ĺ��캯��
biluding::biluding()
{
	m_bedroom="����";
	m_settingroom="����";
};
void goodguy::visit1()
	{
		cout<<"���������ڷ��� "<<b1->m_bedroom<<endl;
		cout<<"���������ڷ��� "<<b1->m_settingroom<<endl;
	};

	void goodguy::visit2()
	{
		//cout<<"���������ڷ��� "<<b1->m_bedroom<<endl;
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