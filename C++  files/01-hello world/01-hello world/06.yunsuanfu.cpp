#include<iostream>
using namespace std;

int main()
{
int a2 = 10;
//ǰ�õ���
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2 << endl;
int c2 = 10;
//���õ���
	int d2 = c2++ * 10;
	cout << "c2=" << c2 << endl;
	cout << "d2=" << d2 << endl;
	int a=1;  int b=2; int c;
	c=(a==b);
	cout << "a��b�Ĺ�ϵΪ" << c << endl;

	system("pause");
	return 0;
}
/*
	//����
	//ǰ�õ����ȶԱ�������++���ټ�����ʽ
	//���õ����ȼ�����ʽ����Ա�������++


*/