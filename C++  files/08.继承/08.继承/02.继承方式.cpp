#include<iostream>
using namespace std;
//子类无论以任何继承方式都访问不了父类的私有成员
//父类中除了私有权限下的成员外，其他任意权限下的成员都可以被子类访问，但是权限会有所变化，
/*若是公共继承，从父到子权限不会改变；若是保护继承，从父到子会变为保护权限（即父类的公共权限到子类会成为保护权限），
	若是私有继承，从父到子会变为私有权限。但是解决方法是子类可以创建自己的成员函数，这样在类外就可以访问父类中的成员了*/

//父类
class fuqin
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;

};

//子类
//公共继承
class son1 : public fuqin
{
public:
	void func1()
	{
			m_a=10;
			
	}
protected:
	void func2()
	{
		m_b=11;
		
	}
private:
	void func3()
	{
		
		//m_c=12;  访问不了父类中的私有成员
	}
};


//保护继承
class son2 : protected fuqin
{
	public:
	void func1()
	{
			m_a=10;
			m_b=11;

			cout<<"保护m_b: "<<m_b<<endl;
	}
protected:
	void func2()
	{
		m_b=11;
		
	}
private:
	void func3()
	{
		//m_c=12;  //访问不了父类中的私有成员
	}
};

//私有继承
class son3 : private fuqin
{
	public:
		
	void func1()
	{
			m_a=10;
			m_b=11;

			cout<<"私有m_b: "<<m_b<<endl;
	}
protected:
	void func2()
	{
		m_b=11;
		
	}
private:
	void func3()
	{
		//m_c=12;  //访问不了父类中的私有成员
	}
};


void test01()
{
	son2 s2;
	s2.func1();
	son3 s3;
	s3.func1();
	//s2.m_a
	//s3.m_a=1000;
		//s3.m_b=1000;
	
	
};


int main()
 {

	test01();
	


	system("pause");

	return 0;
  }