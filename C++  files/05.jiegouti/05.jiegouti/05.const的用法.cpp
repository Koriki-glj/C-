#include<iostream>
using namespace std;
#include<string>

//学生结构体定义
struct student 
{
	string name;
	int age;
	int sorce;

};

//函数定义,指针类型
void print( const  student * s) //加const防止函数体中的误操作，指针类型是为了节约内存空间
{

	//s->age=55; 已经无法修改
	cout<< " 姓名： "<< s->name << "年龄： "<<s->age << "分数： "<<s->sorce<<endl; 
}


int main()
 {
	 struct student s={ "koriki" ,22,88};

	print(&s);

	cout<< "主函数中 姓名： "<< s.name << "年龄： "<<s.age << "分数： "<<s.sorce<<endl; 
	


	system("pause");

  }