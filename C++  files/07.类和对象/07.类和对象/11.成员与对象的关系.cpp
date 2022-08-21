#include<iostream>
using namespace std;


class person1
{

};

class person2
{

	int a;  //非静态成员变量属于类的对象上
	
};

class person3
{
	static int b;  //静态成员变量不属于类的对象上
};
int person3::b=10;

class person4
{
	void func1()  //非静态成员函数不属于类的对象上
	{

	}
};

class person5
{
static	void func2()  //静态成员函数不属于类的对象上
	{

	}
};

void test01()
{
	person1 p1;
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	cout<<"空类所占字节："<<sizeof(p1)<<endl;
};

void test02()
{
	person2 p2;
	cout<<"非静态成员变量所占字节："<<sizeof(p2)<<endl;
};

void test03()
{
	person3 p3;
	cout<<"静态成员变量所占字节："<<sizeof(p3)<<endl;
};

void test04()
{
	person4 p4;
	cout<<"非静态成员函数所占字节："<<sizeof(p4)<<endl;
};

void test05()
{
	person5 p5;
	cout<<"静态成员函数所占字节："<<sizeof(p5)<<endl;
};
int main()
 {
test01();
test02();
test03();
test04();
test05();

	system("pause");

	return 0;
  }