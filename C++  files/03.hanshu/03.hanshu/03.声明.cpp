/*函数的声明

**作用：** 告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。



*  函数的**声明可以多次**，但是函数的**定义只能有一次**



**示例：**

```C++
//声明可以多次，定义只能一次*/

#include<iostream>
using namespace std;
//声明
int max(int a, int b);
int max(int a, int b);

//main主函数
int main() 
{

	int a = 100;
	int b = 200;
	int c;
	c=max(a,b);
	
	
	cout<<"最大值是 " <<c << endl;

	system("pause");

	return 0;
}

//定义只能有一次
int max(int a, int b)
{
	return a > b ? a : b;
}