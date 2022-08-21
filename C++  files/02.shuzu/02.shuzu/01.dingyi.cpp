#include<iostream>
#include<string>
using namespace std;

int main()
{
	//定义方式1
	//数据类型 数组名[元素个数];
	int score[10];

	//利用下标赋值
	score[0] = 100;
	score[1] = 99;
	score[2] = 85;

	//利用下标输出
	//cout << score[0] << endl;
	//cout << score[1] << endl;
	//cout << score[2] << endl;
	for(int i =0;i<3;i++)
	{
		cout << score[i] << endl;
	}
	//第二种定义方式
	//数据类型 数组名[元素个数] =  {值1，值2 ，值3 ...};
	//如果{}内不足10个数据，剩余数据用0补全
	int score2[10] = { 100, 90,80,70,60,50,40,30,20,10 };
		for(int i =0;i<10;i++)
	{
		cout << score2[i] << endl;
	}

		//定义方式3
	//数据类型 数组名[] =  {值1，值2 ，值3 ...};
	int score3[] = { 90,80,70,60,50,40,30,20,10 };

	for (int i = 0; i < 9; i++)
	{
		cout << score3[i] << endl;
	}

	//数组名用途
	//1、可以获取整个数组占用内存空间大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;
	cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;
	cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2、可以通过数组名获取到数组首地址
	cout << "数组首地址为： " << (int)arr<< endl;  //16进制强转10进制
	cout << "数组中第一个元素地址为： " << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为： " << (int)&arr[1] << endl;

	//arr = 100; 错误，数组名是常量，因此不可以赋值
		system("pause");
	return 0;
}