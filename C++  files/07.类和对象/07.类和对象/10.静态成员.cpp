#include<iostream>
using namespace std;

//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
//静态成员分为：
//*  静态成员变量
//   *  所有对象共享同一份数据
//   *  在编译阶段分配内存
//   *  类内声明，类外初始化
//*  静态成员函数
//   *  所有对象共享同一个函数
//   *  静态成员函数只能访问静态成员变量

class person
{
public:
	static int a;  // 静态成员变量
	int b;

static	void func()  //静态成员函数
	{
		a=300;
		//b=20;  //报错原因：静态成员函数只能访问静态成员变量
		cout<<"函数调用！！！"<<a<<endl;
	}
};

 int person::a=100;  //   *  类内声明，类外初始化
void test01()
{
	//int a=100;
	person p1;
	cout<<"p1:"<<p1.a<<endl;
	person p2;
	p2.a=200;
	cout<<"p2:"<<p2.a<<endl;
	cout<<"p1:"<<p1.a<<endl; //   *  所有对象共享同一份数据

};
//静态成员变量不属于某一个对象，它有两种访问方式,对象和类名
void test02()
{
	//对象
	person p3;
	cout<<"p3:"<<p3.a<<endl;
	//类名
	cout<<"类名访问："<<person::a<<endl;

};

//静态成员函数不属于某一个对象，它有两种访问方式,对象和类名
void test03()
{
	//对象
	person p4;
	p4.func();
	//类名
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