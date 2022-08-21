/*/类中的属性和行为我们统一称为成员
/属性也称为成员属性 成员变量
//行为也称为成员函数 成员方法*/

//学习通过行为给属性赋值
#include<iostream>
using namespace std;
#include<string>
//创建类
class student
{
public:

	string m_name;
	int m_age;

	void show()
	{
		cout<< "姓名："<<m_name<< "年龄："<<m_age<<endl;
	}

	//通过行为给属性赋值

	void setname(string name)
	{
		m_name=name;
	}

	void setage(int age)
	{
		m_age=age;
	}
};  //不要忘记这个分号

int main()
 {
	/* student s1;
	 s1.m_name="张三";
	 s1.m_age=44;
	 s1.show();*/
	 student s1;
	 s1.setname("李四");
	 s1.setage(15);
	  s1.show();
	system("pause");

	return 0;
  }
