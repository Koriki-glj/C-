#include<iostream>
using namespace std;

//��ӡ���麯��
void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}


	//ð��������
void bubbleSort(int * arr, int len)  //int * arr Ҳ����дΪint arr[]
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


int main()
 {
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);

	printArray(arr, len);

//> �ܽ᣺�����������뵽������Ϊ����ʱ�����˻�Ϊָ����Ԫ�ص�ָ��
	
	system("pause");

	return 0;
 }