#include<iostream>
using namespace std;


class person1
{
public:
	int age;
mutable	int id;    //��Ա��������ʱ�ӹؼ���mutable���ڳ�����,����������Ȼ�����޸�
	

//	/thisָ��ı�����ָ�볣��
//ָ���ָ���ǲ������޸ĵ�
//const Person const this;
///�ڳ�Ա���������const,���ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	void showage()  const  //������
	{
		id=007;
		 cout<<"����"<<age<<endl;
		  cout<<"ID: "<<id<<endl;
	}

	void add()
	{

	}
};

void test01()
{
	const person1 p;
	//p.age=100;   //  //���������޸ĳ�Ա������ֵ,���ǿ��Է���
	p.id=1000;   //���ǿ����޸ļ�mutable���������
	 cout<<"ID: "<<p.id<<endl;
};


int main()
 {
	 person1 p1;
	 p1.showage();
	
	test01();

	///������ֻ�ܵ��ó�����
	const person1 p2;
	p2.showage();
	//p2.add();  �˺������ǳ������������󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����

	


	system("pause");

	return 0;
  }