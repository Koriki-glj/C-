#include<iostream>
using namespace std;
#include<string>

//**封装意义二：**
//类在设计时，可以把属性和行为放在不同的权限下，加以控制
//访问权限有三种：
//1. public        公共权限    成员类内可以访问    类外也可以访问
//2. protected     保护权限    成员类内可以访问    类外不可以访问
//3. private       私有权限    成员类内可以访问    类外不可以访问


class Person
{
	//姓名  公共权限
public:
	string m_Name;

	//汽车  保护权限
protected:
	string m_Car;

	//银行卡密码  私有权限
private:
	int m_Password;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
		cout<< m_Name<< m_Car<< m_Password<<endl;
	}
};

int main()
 {

		Person p;
	p.m_Name = "李四";
	p.func();
	//p.m_Car = "奔驰";  //保护权限类外访问不到
	//p.m_Password = 123; //私有权限类外访问不到
	


	system("pause");

	return 0;
  }