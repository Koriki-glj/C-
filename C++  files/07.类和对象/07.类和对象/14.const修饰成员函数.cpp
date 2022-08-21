#include<iostream>
using namespace std;


class person1
{
public:
	int age;
mutable	int id;    //成员属性声明时加关键字mutable后，在常函数,常对象中依然可以修改
	

//	/this指针的本质是指针常量
//指针的指向是不可以修改的
//const Person const this;
///在成员函数后面加const,修饰的是this指针，让指针指向的值也不可以修改
	void showage()  const  //常函数
	{
		id=007;
		 cout<<"年龄"<<age<<endl;
		  cout<<"ID: "<<id<<endl;
	}

	void add()
	{

	}
};

void test01()
{
	const person1 p;
	//p.age=100;   //  //常对象不能修改成员变量的值,但是可以访问
	p.id=1000;   //但是可以修改加mutable的特殊变量
	 cout<<"ID: "<<p.id<<endl;
};


int main()
 {
	 person1 p1;
	 p1.showage();
	
	test01();

	///常对象只能调用常函数
	const person1 p2;
	p2.showage();
	//p2.add();  此函数不是常函数，常对象不可以调用普通成员函数，因为普通成员函数可以修改属性

	


	system("pause");

	return 0;
  }