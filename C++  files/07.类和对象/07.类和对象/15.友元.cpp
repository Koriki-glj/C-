#include<iostream>
using namespace std;
#include<string>
class biluding
{
friend	void showsettingroom(biluding* b1); //�������ȫ�ֺ���������Ԫ����ݷ���

private:
	string m_bedroom;
public:
	string m_settingroom;
	//���캯��
	biluding()
	{
		m_bedroom="����";
		m_settingroom="����";
	}
};

////ȫ�ֺ���
	void showsettingroom(biluding* b1)
	{
		cout<< "���������ڷ���  "<< b1->m_settingroom<<endl;

			cout<< "���������ڷ���  "<< b1->m_bedroom<<endl;
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