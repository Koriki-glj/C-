#include<iostream>
using namespace std;
//���ʣ�**���õı�����c++�ڲ�ʵ����һ��ָ�볣��.**

void test01(const int& ref2)
{
	//ref2=50;����
	cout << "ref2:" << ref2 << endl;
};


int main()
 {
	int a = 10;
    
    //�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a; 
	ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;
    
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	
	/*### ��������
**���ã�**����������Ҫ���������βΣ���ֹ�����
�ں����β��б��У����Լ�==const�����β�==����ֹ�βθı�ʵ��*/
	int b=20;
const	int& bv= 20;


int c= 30;
test01(c);
cout << "c:" << c << endl;


	system("pause");

	return 0;
  }