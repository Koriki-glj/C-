#include<iostream>
using namespace std;

//ֵ����
void swap1(int a ,int b)
{
	int temp = a;
	a = b; 
	b = temp;
}

	//��ַ����
	void swap2(int * p1, int *p2)//��ַ����ʱ��ָ����գ���Ϊָ����ǵ�ַ������Ҫһ��
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
 {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int * p = arr;  //ָ�������ָ��

	cout << "��һ��Ԫ�أ� " << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		//����ָ���������
		cout << *p << endl;
		p++;
	}
	
	
	//ָ��ͺ���
	//**���ã�**����ָ�������������������޸�ʵ�ε�ֵ
	
	int a = 10;
	int b = 20;
	swap1(a, b); // ֵ���ݲ���ı�ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap2(&a, &b); //��ַ���ݻ�ı�ʵ��

	cout << "a = " << a << endl;

	cout << "b = " << b << endl;

	system("pause");

	return 0;
}