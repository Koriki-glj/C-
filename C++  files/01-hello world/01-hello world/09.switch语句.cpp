/**作用：**执行多条件分支语句
switch缺点，判断时候只能是整型或者字符型， 不可以是一个区间
**语法：**/

#include<iostream>
using namespace std;
int main()
{
	int a =0;
	cout << "请打分" <<endl;
	cin >> a;

switch(a)

  {
case 10 :cout<<"经典"<<endl;break;
case 8 :cout<<"好片"<<endl;break;
case 7 :cout<<"一般"<<endl;break;
	default:cout<< "烂片"<<endl;break;
  }
system("pause");
return 0;
}