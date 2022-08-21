//加号运算符重载
#include<iostream>
using namespace std;

class person1
{
public:
	int m_a;
	int m_b;

	//成员函数加法重载
	//person1 operator+(person1& p)
	//{
	//		person1 temp;
	//		temp.m_a=this->m_a+p.m_a;  //this指向所被调用函数的对象，即指向下文的p4
 //           temp.m_b=this->m_b+p.m_b;
	//		return temp;

	//}
};

//全局函数加法重载
person1 operator+(person1& p1,person1& p2)
{
	person1 temp;
	temp.m_a=p1.m_a+p2.m_a;
	temp.m_b=p1.m_b+p2.m_b;
	return temp;

};

//运算符重载也会发生函数重载
person1 operator+(person1& p1,int num)
{
	person1 temp;
	temp.m_a=p1.m_a+num;
	temp.m_b=p1.m_b+num;
	return temp;

};

void test01()
{
	person1 p1;
	person1 p2;
	p1.m_a=10;
	p1.m_b=20;
	p2.m_a=10;
	p2.m_b=20;
	person1 p3=p1+p2;  //简写
	//person1 p3=operator+(p1,p2);  //本质写法，二者效果一样
	cout<<"全局函数p3的m_a的值"<<p3.m_a<<endl;
	cout<<"全局函数p3的m_b的值"<<p3.m_b<<endl;

};

//void test02()
//{
//	person1 p4;
//	p4.m_a=10;
//	p4.m_b=20;
//	person1 p5;
//	p5.m_a=20;
//	p5.m_b=30;
//	//person1 p6=p4+p5;      //简写
//	person1 p6=p4.operator+(p5);  //本质写法，二者效果一样
//	cout<<"成员函数p6的m_a的值"<<p6.m_a<<endl;
//	cout<<"成员函数p6的m_b的值"<<p6.m_b<<endl;
//};


void test03()
{
	person1 p7;
	p7.m_a=100;
	p7.m_b=101;
	int a=10;
	person1 p8 =p7+a;
cout<<"运算符重载p8的m_a的值"<<p8.m_a<<endl;
cout<<"运算符重载p8的m_b的值"<<p8.m_b<<endl;
}
int main()
 {

	
	test01();
	test03();
	//test02();
	system("pause");

	return 0;
  }