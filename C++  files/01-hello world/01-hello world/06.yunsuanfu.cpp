#include<iostream>
using namespace std;

int main()
{
int a2 = 10;
//前置递增
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2 << endl;
int c2 = 10;
//后置递增
	int d2 = c2++ * 10;
	cout << "c2=" << c2 << endl;
	cout << "d2=" << d2 << endl;
	int a=1;  int b=2; int c;
	c=(a==b);
	cout << "a与b的关系为" << c << endl;

	system("pause");
	return 0;
}
/*
	//区别
	//前置递增先对变量进行++，再计算表达式
	//后置递增先计算表达式，后对变量进行++


*/