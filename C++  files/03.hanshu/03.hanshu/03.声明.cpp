/*����������

**���ã�** ���߱������������Ƽ���ε��ú�����������ʵ��������Ե������塣



*  ������**�������Զ��**�����Ǻ�����**����ֻ����һ��**



**ʾ����**

```C++
//�������Զ�Σ�����ֻ��һ��*/

#include<iostream>
using namespace std;
//����
int max(int a, int b);
int max(int a, int b);

//main������
int main() 
{

	int a = 100;
	int b = 200;
	int c;
	c=max(a,b);
	
	
	cout<<"���ֵ�� " <<c << endl;

	system("pause");

	return 0;
}

//����ֻ����һ��
int max(int a, int b)
{
	return a > b ? a : b;
}