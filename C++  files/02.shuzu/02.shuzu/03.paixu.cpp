#include<iostream>
#include<string>
using namespace std;
/**���ã�** ��õ������㷨����������Ԫ�ؽ�������

1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
2. ��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ��
3. �ظ����ϵĲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
**ʾ����** ������ { 4,2,8,0,5,7,1,3,9 } ������������*/
int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "����ǰ��"<<endl;
	for(int i=0; i<9;i++)
	{
		cout<< arr[i]<<" ";
	}
	cout<< endl;

	for (int i = 0; i < 9 - 1; i++)  //������������Ԫ�ظ���-1
	{
		for (int j = 0; j < 9 - 1 - i; j++)  //�Աȴ�������Ԫ�ظ���-��ǰ����-1
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "�����"<<endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout<< endl;
	system("pause");
	return 0;
}