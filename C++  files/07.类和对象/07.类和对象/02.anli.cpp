/*/���е����Ժ���Ϊ����ͳһ��Ϊ��Ա
/����Ҳ��Ϊ��Ա���� ��Ա����
//��ΪҲ��Ϊ��Ա���� ��Ա����*/

//ѧϰͨ����Ϊ�����Ը�ֵ
#include<iostream>
using namespace std;
#include<string>
//������
class student
{
public:

	string m_name;
	int m_age;

	void show()
	{
		cout<< "������"<<m_name<< "���䣺"<<m_age<<endl;
	}

	//ͨ����Ϊ�����Ը�ֵ

	void setname(string name)
	{
		m_name=name;
	}

	void setage(int age)
	{
		m_age=age;
	}
};  //��Ҫ��������ֺ�

int main()
 {
	/* student s1;
	 s1.m_name="����";
	 s1.m_age=44;
	 s1.show();*/
	 student s1;
	 s1.setname("����");
	 s1.setage(15);
	  s1.show();
	system("pause");

	return 0;
  }
