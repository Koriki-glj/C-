#include<iostream>
using namespace std;
#include<string>

class biluding
{
	//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽������
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
		cout<<"���������ڷ��� "<<b1->m_settingroom<<endl;
		cout<<"���������ڷ��� "<<b1->m_bedroom<<endl;
	}
private:
	biluding* b1;  //��biluding�ཨ����һ��ָ��
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