#include<iostream>
using namespace std;
#include<string>
/**���ã�** �ṹ���еĳ�Ա��������һ���ṹ��

**���磺**ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��
**ʾ����*/


//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};//�ӷֺ�

//��ʦ�ṹ�嶨��
struct teacher
{
    //��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	struct student stu; //�ӽṹ�� ѧ�� ���ǵö�����ӽṹ��ı�����stu
};


int main()
 {
	struct teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;

	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;
	
	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;
	
	system("pause");

	return 0;
  }