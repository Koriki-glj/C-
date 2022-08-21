/*
**作用：**将一段经常使用的代码封装起来，减少重复代码

一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。

### 6.2 函数的定义

函数的定义一般主要有5个步骤：

1、返回值类型 

2、函数名

3、参数表列

4、函数体语句 

5、return 表达式
格式如下：
返回值类型 函数名 （参数列表）
{

       函数体语句

       return表达式

}
*/
#include<iostream>
using namespace std;
//自定义函数
	int add (int num1, int num2)
  {
	int sum =  num1 + num2;
	return sum;
  }

	//main中调用函数
int main()

{
	int a=12;
	int b=14;
	int c;
	c = add (a,b) ;//调用
	cout<<"c= "<< c<<endl;
	system("pause");
	return 0;
}
