#include<iostream>
#include<string>
using namespace std;
/**作用：** 最常用的排序算法，对数组内元素进行排序

1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
3. 重复以上的步骤，每次比较次数-1，直到不需要比较
**示例：** 将数组 { 4,2,8,0,5,7,1,3,9 } 进行升序排序*/
int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前："<<endl;
	for(int i=0; i<9;i++)
	{
		cout<< arr[i]<<" ";
	}
	cout<< endl;

	for (int i = 0; i < 9 - 1; i++)  //排序轮数等于元素个数-1
	{
		for (int j = 0; j < 9 - 1 - i; j++)  //对比次数等于元素个数-当前轮数-1
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后："<<endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout<< endl;
	system("pause");
	return 0;
}