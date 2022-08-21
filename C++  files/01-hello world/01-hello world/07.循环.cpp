#include<iostream>
using namespace std;

int main()
{
	const int cs =600 ;
	double d1=0;
	cout <<"请输入分数" << endl;
	cin >> d1;
	cout <<"你输入的分数是" << d1 << endl;
	if (d1>=cs)   //if后面不要加分号！！！
	{
		cout <<"您的成绩大于等于600，考上了一本"<<endl;
		if(d1<650)
       cout <<"您考上了人大"<<endl;
		else if (d1<700)
         cout <<"您考上了清华"<<endl;
		else
			 cout <<"您考上了北大"<<endl;
	}
	else if(d1>=400)
	{
		cout <<"您考上了二本"<<endl;
	}
	else
	{
	cout <<"您没有考上大学"<<endl;
	}
	

	system("pause");
	return 0;
}