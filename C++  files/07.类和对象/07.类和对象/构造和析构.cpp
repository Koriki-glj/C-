#include<iostream>
using namespace std;

//两种分类方式：
//
//​	按参数分为： 有参构造和无参构造
//
//​	按类型分为： 普通构造和拷贝构造
//
//三种调用方式：
//
//​	括号法
//
//​	显示法
//
//​	隐式转换法
class Person
{
public:
	int age;
	//构造函数
		Person(int a)
	{
		age=a;
		cout << "Person的有参构造函数调用" <<age<< endl;
	}
	//Person(const Person& p)
	//{
	//	age=p.age;
	//	cout << "Person的拷贝构造函数调用" <<age<< endl;
	//}

	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};
//
//void test01()
//{
//	Person pp(10);
//	Person p2(pp);
//	cout<<"p2的年龄："<<p2.age<<endl;
//}
void test02()
{
	Person p(1);
}
int main()
 {

    // test01();
	 test02();
	system("pause");

	return 0;
  }