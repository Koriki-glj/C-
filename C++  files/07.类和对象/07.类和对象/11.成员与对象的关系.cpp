#include<iostream>
using namespace std;


class person1
{

};

class person2
{

	int a;  //�Ǿ�̬��Ա����������Ķ�����
	
};

class person3
{
	static int b;  //��̬��Ա������������Ķ�����
};
int person3::b=10;

class person4
{
	void func1()  //�Ǿ�̬��Ա������������Ķ�����
	{

	}
};

class person5
{
static	void func2()  //��̬��Ա������������Ķ�����
	{

	}
};

void test01()
{
	person1 p1;
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	cout<<"������ռ�ֽڣ�"<<sizeof(p1)<<endl;
};

void test02()
{
	person2 p2;
	cout<<"�Ǿ�̬��Ա������ռ�ֽڣ�"<<sizeof(p2)<<endl;
};

void test03()
{
	person3 p3;
	cout<<"��̬��Ա������ռ�ֽڣ�"<<sizeof(p3)<<endl;
};

void test04()
{
	person4 p4;
	cout<<"�Ǿ�̬��Ա������ռ�ֽڣ�"<<sizeof(p4)<<endl;
};

void test05()
{
	person5 p5;
	cout<<"��̬��Ա������ռ�ֽڣ�"<<sizeof(p5)<<endl;
};
int main()
 {
test01();
test02();
test03();
test04();
test05();

	system("pause");

	return 0;
  }