#include<iostream>
using namespace std;


/**函数重载满足条件：**

* 同一个作用域下
* 函数名称相同
* 函数参数**类型不同**  或者 **个数不同** 或者 **顺序不同**/
//函数的返回值不可以作为函数重载的条件
//函数重载需要函数都在同一个作用域下
void func()
{
	cout << "func 的调用！" << endl;
}
void func(int a)
{
	cout << "func (int a) 的调用！" << endl;
}
void func(double a)
{
	cout << "func (double a)的调用！" << endl;
}
void func(int a ,double b)
{
	cout << "func (int a ,double b) 的调用！" << endl;
}
void func(double a ,int b)
{
	cout << "func (double a ,int b)的调用！" << endl;
}

void funcb(int& a)
{
	cout << "func(int& a)的调用！" << endl;
}

void funcb(const int& a)
{
	cout << "func(const int& a)的调用！" << endl;
}

//函数返回值不可以作为函数重载条件
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)的调用！" << endl;
//}
//函数重载碰到函数默认参数，有可能出现二义性，所以函数重载时不要给形参设置默认参数

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