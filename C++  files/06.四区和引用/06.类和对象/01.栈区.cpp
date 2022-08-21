#include<iostream>
using namespace std;

int * func()
{
	int a = 10;
	return &a;
}

int main()
 {

	int *p = func();

	cout << *p << endl;  //数据只保留一次
	cout << *p << endl;
	


	system("pause");

	return 0;
  }