//�Ӻ����������
#include<iostream>
using namespace std;

class person1
{
public:
	int m_a;
	int m_b;

	//��Ա�����ӷ�����
	//person1 operator+(person1& p)
	//{
	//		person1 temp;
	//		temp.m_a=this->m_a+p.m_a;  //thisָ���������ú����Ķ��󣬼�ָ�����ĵ�p4
 //           temp.m_b=this->m_b+p.m_b;
	//		return temp;

	//}
};

//ȫ�ֺ����ӷ�����
person1 operator+(person1& p1,person1& p2)
{
	person1 temp;
	temp.m_a=p1.m_a+p2.m_a;
	temp.m_b=p1.m_b+p2.m_b;
	return temp;

};

//���������Ҳ�ᷢ����������
person1 operator+(person1& p1,int num)
{
	person1 temp;
	temp.m_a=p1.m_a+num;
	temp.m_b=p1.m_b+num;
	return temp;

};

void test01()
{
	person1 p1;
	person1 p2;
	p1.m_a=10;
	p1.m_b=20;
	p2.m_a=10;
	p2.m_b=20;
	person1 p3=p1+p2;  //��д
	//person1 p3=operator+(p1,p2);  //����д��������Ч��һ��
	cout<<"ȫ�ֺ���p3��m_a��ֵ"<<p3.m_a<<endl;
	cout<<"ȫ�ֺ���p3��m_b��ֵ"<<p3.m_b<<endl;

};

//void test02()
//{
//	person1 p4;
//	p4.m_a=10;
//	p4.m_b=20;
//	person1 p5;
//	p5.m_a=20;
//	p5.m_b=30;
//	//person1 p6=p4+p5;      //��д
//	person1 p6=p4.operator+(p5);  //����д��������Ч��һ��
//	cout<<"��Ա����p6��m_a��ֵ"<<p6.m_a<<endl;
//	cout<<"��Ա����p6��m_b��ֵ"<<p6.m_b<<endl;
//};


void test03()
{
	person1 p7;
	p7.m_a=100;
	p7.m_b=101;
	int a=10;
	person1 p8 =p7+a;
cout<<"���������p8��m_a��ֵ"<<p8.m_a<<endl;
cout<<"���������p8��m_b��ֵ"<<p8.m_b<<endl;
}
int main()
 {

	
	test01();
	test03();
	//test02();
	system("pause");

	return 0;
  }