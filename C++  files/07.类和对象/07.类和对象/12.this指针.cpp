#include<iostream>
using namespace std;

//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
//this指针指向被调用的成员函数所属的对象
//this指针是隐含每一个非静态成员函数内的一种指针
//
//this指针不需要定义，直接使用即可
//this指针的用途：
//
//*  当形参和成员变量同名时，可用this指针来区分
//*  在类的非静态成员函数中返回对象本身，可使用return *this

//this解决名称冲突
class person1
{
public:
	int age;

	person1(int age)
	{
		this->age=age;//当形参和成员变量同名时，可用this指针来区分
	}
};

class person2
{
public:
	int age;

	person2(int age) //构造函数
	{
		this->age=age;
	}

	person2& addage(person2& p)  //如果返回是值的话，即person2 addage(person2& p) ，会创造新对象，不会返回原本对象
	{
		this->age+=p.age;

		return *this; //在类的非静态成员函数中返回对象本身，可使用return *this
	}
};


void test01()
{
	person1 p1(18);
	cout<<"年龄为 "<<p1.age<<endl;
	person1 p2(10);
	cout<<"年龄为 "<<p2.age<<endl;

};

void test02()
{
	
	person2 p1(10);
	person2 p2(10);
	///链式编程思想
p2.addage(p1).addage(p1).addage(p1).addage(p1);	
	cout<<"p2年龄为 "<<p2.age<<endl;

};


int main()
 {
	 test01();
	 test02();
	system("pause");

	return 0;
  }