/* 所谓值传递，就是函数调用时实参将数值传给形参
* 值传递时，==如果形参发生改变，并不会影响实参==



**示例：**/
#include<iostream>
using namespace std;

void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//return ; 当函数声明的时候，不需要返回值，可以不写return，声明时可以写void
}

int main() 
{

	int a = 10;
	int b = 20;

	swap(a, b);
	//在调用swap函数之后，a,b的值未变化，这就是值传递时，形参改变不了实参的含义
	cout << "mian中的 a = " << a << endl;
	cout << "mian中的 b = " << b << endl;

	system("pause");

	return 0;
}