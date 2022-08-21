#include<iostream>
using namespace std;



class person1
{
	friend ostream& operator<<(ostream &cout,person1& p);
private:
	int m_a;
	int m_b;
//成员函数实现不了左移运算符
};


//使用全局函数实现左移运算符
ostream& operator<<(ostream &cout,person1& p)   //本质：operator<<(cout,p)   简化：cout<<p;(想想加法运算符)
{
	p.m_a=100;
	p.m_b=10;
	cout<<"m_a= "<<p.m_a<<endl;
	cout<<"m_b= "<<p.m_b<<endl;
	return cout;
};

//void test01()
//{
//	person1 p1;
//	p1.m_a=10;
//	p1.m_b=10;
//	cout<<"m_a= "<<p1.m_a<<endl;
//	cout<<"m_b= "<<p1.m_b<<endl;
//
//	//cout<<p1<<endl;  //想达成的效果，输入p1,输出所有属性
//};


int main()
 {
//test01();
	person1 p2;


	cout<<p2<<endl;
	


	system("pause");

	return 0;
  }