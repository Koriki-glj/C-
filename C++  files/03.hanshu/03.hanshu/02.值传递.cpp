/* ��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ�����β�
* ֵ����ʱ��==����βη����ı䣬������Ӱ��ʵ��==



**ʾ����**/
#include<iostream>
using namespace std;

void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//return ; ������������ʱ�򣬲���Ҫ����ֵ�����Բ�дreturn������ʱ����дvoid
}

int main() 
{

	int a = 10;
	int b = 20;

	swap(a, b);
	//�ڵ���swap����֮��a,b��ֵδ�仯�������ֵ����ʱ���βθı䲻��ʵ�εĺ���
	cout << "mian�е� a = " << a << endl;
	cout << "mian�е� b = " << b << endl;

	system("pause");

	return 0;
}