#include<iostream>
using namespace std;
//在C++中主要利用new在堆区开辟内存
//利用new关键字 可以将数据开辟到堆区
//指针本质也是局部变量放在栈上， 指针保存的数据是放在堆区
int * func()
{
	int*p=new int(10);
		return p;
};

int * test()
{
	int* arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	return arr;
	//释放数组 delete 后加 []
	delete[] arr;

};



int main()
 {
	 int *p=func();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	cout << *p << endl; //报错，释放的空间不可访问
	
	int * arr=test();
	

	system("pause");

	return 0;
  }