#include<iostream>
using namespace std;
//��C++����Ҫ����new�ڶ��������ڴ�
//����new�ؼ��� ���Խ����ݿ��ٵ�����
//ָ�뱾��Ҳ�Ǿֲ���������ջ�ϣ� ָ�뱣��������Ƿ��ڶ���
int * func()
{
	int*p=new int(10);
		return p;
};

int * test()
{
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	return arr;
	//�ͷ����� delete ��� []
	delete[] arr;

};



int main()
 {
	 int *p=func();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	cout << *p << endl; //�����ͷŵĿռ䲻�ɷ���
	
	int * arr=test();
	

	system("pause");

	return 0;
  }