/*
**���ã�**��һ�ξ���ʹ�õĴ����װ�����������ظ�����

һ���ϴ�ĳ���һ���Ϊ���ɸ�����飬ÿ��ģ��ʵ���ض��Ĺ��ܡ�

### 6.2 �����Ķ���

�����Ķ���һ����Ҫ��5�����裺

1������ֵ���� 

2��������

3����������

4����������� 

5��return ���ʽ
��ʽ���£�
����ֵ���� ������ �������б�
{

       ���������

       return���ʽ

}
*/
#include<iostream>
using namespace std;
//�Զ��庯��
	int add (int num1, int num2)
  {
	int sum =  num1 + num2;
	return sum;
  }

	//main�е��ú���
int main()

{
	int a=12;
	int b=14;
	int c;
	c = add (a,b) ;//����
	cout<<"c= "<< c<<endl;
	system("pause");
	return 0;
}
