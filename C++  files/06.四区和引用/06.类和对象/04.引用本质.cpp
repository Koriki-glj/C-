#include<iostream>
using namespace std;
//本质：**引用的本质在c++内部实现是一个指针常量.**

void test01(const int& ref2)
{
	//ref2=50;错误
	cout << "ref2:" << ref2 << endl;
};


int main()
 {
	int a = 10;
    
    //自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
	int& ref = a; 
	ref = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;
    
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	
	/*### 常量引用
**作用：**常量引用主要用来修饰形参，防止误操作
在函数形参列表中，可以加==const修饰形参==，防止形参改变实参*/
	int b=20;
const	int& bv= 20;


int c= 30;
test01(c);
cout << "c:" << c << endl;


	system("pause");

	return 0;
  }