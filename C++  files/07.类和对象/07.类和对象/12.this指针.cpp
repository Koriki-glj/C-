#include<iostream>
using namespace std;

//ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ�����
//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
//
//thisָ�벻��Ҫ���壬ֱ��ʹ�ü���
//thisָ�����;��
//
//*  ���βκͳ�Ա����ͬ��ʱ������thisָ��������
//*  ����ķǾ�̬��Ա�����з��ض�������ʹ��return *this

//this������Ƴ�ͻ
class person1
{
public:
	int age;

	person1(int age)
	{
		this->age=age;//���βκͳ�Ա����ͬ��ʱ������thisָ��������
	}
};

class person2
{
public:
	int age;

	person2(int age) //���캯��
	{
		this->age=age;
	}

	person2& addage(person2& p)  //���������ֵ�Ļ�����person2 addage(person2& p) ���ᴴ���¶��󣬲��᷵��ԭ������
	{
		this->age+=p.age;

		return *this; //����ķǾ�̬��Ա�����з��ض�������ʹ��return *this
	}
};


void test01()
{
	person1 p1(18);
	cout<<"����Ϊ "<<p1.age<<endl;
	person1 p2(10);
	cout<<"����Ϊ "<<p2.age<<endl;

};

void test02()
{
	
	person2 p1(10);
	person2 p2(10);
	///��ʽ���˼��
p2.addage(p1).addage(p1).addage(p1).addage(p1);	
	cout<<"p2����Ϊ "<<p2.age<<endl;

};


int main()
 {
	 test01();
	 test02();
	system("pause");

	return 0;
  }