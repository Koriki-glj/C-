#include<iostream>
using namespace std;
#include<string>

//**��װ�������**
//�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
//����Ȩ�������֣�
//1. public        ����Ȩ��    ��Ա���ڿ��Է���    ����Ҳ���Է���
//2. protected     ����Ȩ��    ��Ա���ڿ��Է���    ���ⲻ���Է���
//3. private       ˽��Ȩ��    ��Ա���ڿ��Է���    ���ⲻ���Է���


class Person
{
	//����  ����Ȩ��
public:
	string m_Name;

	//����  ����Ȩ��
protected:
	string m_Car;

	//���п�����  ˽��Ȩ��
private:
	int m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
		cout<< m_Name<< m_Car<< m_Password<<endl;
	}
};

int main()
 {

		Person p;
	p.m_Name = "����";
	p.func();
	//p.m_Car = "����";  //����Ȩ��������ʲ���
	//p.m_Password = 123; //˽��Ȩ��������ʲ���
	


	system("pause");

	return 0;
  }