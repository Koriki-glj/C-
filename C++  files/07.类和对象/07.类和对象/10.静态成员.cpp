#include<iostream>
using namespace std;

//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
//��̬��Ա��Ϊ��
//*  ��̬��Ա����
//   *  ���ж�����ͬһ������
//   *  �ڱ���׶η����ڴ�
//   *  ���������������ʼ��
//*  ��̬��Ա����
//   *  ���ж�����ͬһ������
//   *  ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class person
{
public:
	static int a;  // ��̬��Ա����
	int b;

static	void func()  //��̬��Ա����
	{
		a=300;
		//b=20;  //����ԭ�򣺾�̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		cout<<"�������ã�����"<<a<<endl;
	}
};

 int person::a=100;  //   *  ���������������ʼ��
void test01()
{
	//int a=100;
	person p1;
	cout<<"p1:"<<p1.a<<endl;
	person p2;
	p2.a=200;
	cout<<"p2:"<<p2.a<<endl;
	cout<<"p1:"<<p1.a<<endl; //   *  ���ж�����ͬһ������

};
//��̬��Ա����������ĳһ�������������ַ��ʷ�ʽ,���������
void test02()
{
	//����
	person p3;
	cout<<"p3:"<<p3.a<<endl;
	//����
	cout<<"�������ʣ�"<<person::a<<endl;

};

//��̬��Ա����������ĳһ�������������ַ��ʷ�ʽ,���������
void test03()
{
	//����
	person p4;
	p4.func();
	//����
	person::func();
};
int main()
 {

	
	//test01();
	 //test02();

	 test03();

	system("pause");

	return 0;
  }