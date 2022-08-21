#include<iostream>
using namespace std;

//地址传递
//void test01(int *a,int*b)
//{
//	int  temp =*a;
//	*a=*b;
//	*b =temp;
//
//};

//引用传递，引用做参数
void test03(int& a,int& b)
{
	int  temp = a;
	a = b;
	b = temp;
};

//引用做函数返回值
int& test04()
{
	int a=10;
	return a;
};




int main()
 {
	 int a=10;
	 int b=20;
	// test01(&a,&b);
	/* cout<< "a="<< a<<endl;
	 cout<< "b="<< b<<endl;*/

	 test03(a, b);

     cout<< "a="<< a<<endl;
	 cout<< "b="<< b<<endl;	
	
int& ref =test04();
     cout<< "ref="<< ref<<endl;
	 cout<< "ref="<< ref<<endl;	//不能返回局部变量引用

	 test04()=1000; 	//如果函数做左值，那么必须返回引用
	 cout<< "ref="<< ref<<endl;
	 cout<< "ref="<< ref<<endl;
	system("pause");

	return 0;
  }