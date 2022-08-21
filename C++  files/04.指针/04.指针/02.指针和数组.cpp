#include<iostream>
using namespace std;

//值传递
void swap1(int a ,int b)
{
	int temp = a;
	a = b; 
	b = temp;
}

	//地址传递
	void swap2(int * p1, int *p2)//地址传递时用指针接收，因为指针就是地址，类型要一致
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
 {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int * p = arr;  //指向数组的指针

	cout << "第一个元素： " << arr[0] << endl;
	cout << "指针访问第一个元素： " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		//利用指针遍历数组
		cout << *p << endl;
		p++;
	}
	
	
	//指针和函数
	//**作用：**利用指针作函数参数，可以修改实参的值
	
	int a = 10;
	int b = 20;
	swap1(a, b); // 值传递不会改变实参

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap2(&a, &b); //地址传递会改变实参

	cout << "a = " << a << endl;

	cout << "b = " << b << endl;

	system("pause");

	return 0;
}