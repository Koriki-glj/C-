#include<iostream>
#include<string>
using namespace std;

int main()
{
	//���巽ʽ1
	//�������� ������[Ԫ�ظ���];
	int score[10];

	//�����±긳ֵ
	score[0] = 100;
	score[1] = 99;
	score[2] = 85;

	//�����±����
	//cout << score[0] << endl;
	//cout << score[1] << endl;
	//cout << score[2] << endl;
	for(int i =0;i<3;i++)
	{
		cout << score[i] << endl;
	}
	//�ڶ��ֶ��巽ʽ
	//�������� ������[Ԫ�ظ���] =  {ֵ1��ֵ2 ��ֵ3 ...};
	//���{}�ڲ���10�����ݣ�ʣ��������0��ȫ
	int score2[10] = { 100, 90,80,70,60,50,40,30,20,10 };
		for(int i =0;i<10;i++)
	{
		cout << score2[i] << endl;
	}

		//���巽ʽ3
	//�������� ������[] =  {ֵ1��ֵ2 ��ֵ3 ...};
	int score3[] = { 90,80,70,60,50,40,30,20,10 };

	for (int i = 0; i < 9; i++)
	{
		cout << score3[i] << endl;
	}

	//��������;
	//1�����Ի�ȡ��������ռ���ڴ�ռ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "����������ռ�ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ�� " << sizeof(arr[0]) << endl;
	cout << "�����Ԫ�ظ���Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2������ͨ����������ȡ�������׵�ַ
	cout << "�����׵�ַΪ�� " << (int)arr<< endl;  //16����ǿת10����
	cout << "�����е�һ��Ԫ�ص�ַΪ�� " << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ�� " << (int)&arr[1] << endl;

	//arr = 100; �����������ǳ�������˲����Ը�ֵ
		system("pause");
	return 0;
}