#include<iostream>
using namespace std;



class person1
{
	friend ostream& operator<<(ostream &cout,person1& p);
private:
	int m_a;
	int m_b;
//��Ա����ʵ�ֲ������������
};


//ʹ��ȫ�ֺ���ʵ�����������
ostream& operator<<(ostream &cout,person1& p)   //���ʣ�operator<<(cout,p)   �򻯣�cout<<p;(����ӷ������)
{
	p.m_a=100;
	p.m_b=10;
	cout<<"m_a= "<<p.m_a<<endl;
	cout<<"m_b= "<<p.m_b<<endl;
	return cout;
};

//void test01()
//{
//	person1 p1;
//	p1.m_a=10;
//	p1.m_b=10;
//	cout<<"m_a= "<<p1.m_a<<endl;
//	cout<<"m_b= "<<p1.m_b<<endl;
//
//	//cout<<p1<<endl;  //���ɵ�Ч��������p1,�����������
//};


int main()
 {
//test01();
	person1 p2;


	cout<<p2<<endl;
	


	system("pause");

	return 0;
  }