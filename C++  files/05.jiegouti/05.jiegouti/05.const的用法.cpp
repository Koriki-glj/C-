#include<iostream>
using namespace std;
#include<string>

//ѧ���ṹ�嶨��
struct student 
{
	string name;
	int age;
	int sorce;

};

//��������,ָ������
void print( const  student * s) //��const��ֹ�������е��������ָ��������Ϊ�˽�Լ�ڴ�ռ�
{

	//s->age=55; �Ѿ��޷��޸�
	cout<< " ������ "<< s->name << "���䣺 "<<s->age << "������ "<<s->sorce<<endl; 
}


int main()
 {
	 struct student s={ "koriki" ,22,88};

	print(&s);

	cout<< "�������� ������ "<< s.name << "���䣺 "<<s.age << "������ "<<s.sorce<<endl; 
	


	system("pause");

  }