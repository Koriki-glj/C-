#include<iostream>
using namespace std;

//��ַ����
//void test01(int *a,int*b)
//{
//	int  temp =*a;
//	*a=*b;
//	*b =temp;
//
//};

//���ô��ݣ�����������
void test03(int& a,int& b)
{
	int  temp = a;
	a = b;
	b = temp;
};

//��������������ֵ
int& test04()
{
	int a=10;
	return a;
};




int main()
 {
	 int a=10;
	 int b=20;
	// test01(&a,&b);
	/* cout<< "a="<< a<<endl;
	 cout<< "b="<< b<<endl;*/

	 test03(a, b);

     cout<< "a="<< a<<endl;
	 cout<< "b="<< b<<endl;	
	
int& ref =test04();
     cout<< "ref="<< ref<<endl;
	 cout<< "ref="<< ref<<endl;	//���ܷ��ؾֲ���������

	 test04()=1000; 	//�����������ֵ����ô���뷵������
	 cout<< "ref="<< ref<<endl;
	 cout<< "ref="<< ref<<endl;
	system("pause");

	return 0;
  }