#include<iostream>
using namespace std;


/**������������������**

* ͬһ����������
* ����������ͬ
* ��������**���Ͳ�ͬ**  ���� **������ͬ** ���� **˳��ͬ**/
//�����ķ���ֵ��������Ϊ�������ص�����
//����������Ҫ��������ͬһ����������
void func()
{
	cout << "func �ĵ��ã�" << endl;
}
void func(int a)
{
	cout << "func (int a) �ĵ��ã�" << endl;
}
void func(double a)
{
	cout << "func (double a)�ĵ��ã�" << endl;
}
void func(int a ,double b)
{
	cout << "func (int a ,double b) �ĵ��ã�" << endl;
}
void func(double a ,int b)
{
	cout << "func (double a ,int b)�ĵ��ã�" << endl;
}

void funcb(int& a)
{
	cout << "func(int& a)�ĵ��ã�" << endl;
}

void funcb(const int& a)
{
	cout << "func(const int& a)�ĵ��ã�" << endl;
}

//��������ֵ��������Ϊ������������
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)�ĵ��ã�" << endl;
//}
//����������������Ĭ�ϲ������п��ܳ��ֶ����ԣ����Ժ�������ʱ��Ҫ���β�����Ĭ�ϲ���

int main()
 {

	func();
	func(10);
	func(3.14);
	func(10,3.14);
	func(3.14 , 10);
	int a =10;
	funcb(a);
	funcb(100);
	system("pause");

	return 0;
  }