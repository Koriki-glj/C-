#include<iostream>
#include<string>
using namespace std;
/*��ά���鶨������ַ�ʽ��

1. ` ��������  ������[ ���� ][ ���� ]; `
2. `��������  ������[ ���� ][ ���� ] = { {����1������2 } ��{����3������4 } };`
3. `��������  ������[ ���� ][ ���� ] = { ����1������2������3������4};`
4. ` ��������  ������[  ][ ���� ] = { ����1������2������3������4};`*/
//endl�����е���˼
int main() 
{
	int arr[2][3]={1,2,3,4,5,6};//��ά����

	for(int i=0;i<2;i++)  //��
	{
		for(int j=0;j<3;j++) //��
		{
			cout <<arr[i][j]<<" ";
		}
		cout <<endl;
	}

	cout << "��ά�����С�� " << sizeof(arr) << endl;
	cout << "��ά����һ�д�С�� " << sizeof(arr[0]) << endl;
	cout << "��ά����Ԫ�ش�С�� " << sizeof(arr[0][0]) << endl;

	cout << "��ά���������� " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//��ַ
	cout << "��ά�����׵�ַ��" << arr << endl;
	cout << "��ά�����һ�е�ַ��" << arr[0] << endl;
	cout << "��ά����ڶ��е�ַ��" << arr[1] << endl;

	cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr[0][1] << endl;

	//����
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};

	string names[3] = { "����","����","����" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << names[i] << "ͬѧ�ܳɼ�Ϊ�� " << sum << endl;
	}
	system("pause");

	return 0;
}