#include<iostream>
#include<string>
using namespace std;

int main()
{//找出一维数组的最大值
	int arr[5] = {300,350,200,400,250};
	int max=0;
	for(int i=0; i<5; i++)
	{
		if (arr[i]> max)
		{
			max=arr[i];
		}
	};
	cout << "最大值是"<< max <<endl;


	//*数组元素逆置

	int arr2[]={1,3,2,5,4};
	int start = 0;
	int end = sizeof(arr2)/sizeof(arr2[0])-1;

	cout<<"逆置前的元素顺序为："<<endl;
		for (int i=0; i<5;i++)
		{
			cout << arr2[i] <<endl;
		}


		while(start<end)
		{
		int temp=arr2[start];
		arr2[start]=arr2[end];
		arr2[end]=temp;	
		 start++;
		 end--;
	    }

	cout<<"逆置后的元素顺序为："<<endl;
	for (int i=0; i<5;i++)
		{
			cout << arr2[i] <<endl;
		}
	system("pause");
	return 0;
}