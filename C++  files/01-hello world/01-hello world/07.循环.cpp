#include<iostream>
using namespace std;

int main()
{
	const int cs =600 ;
	double d1=0;
	cout <<"���������" << endl;
	cin >> d1;
	cout <<"������ķ�����" << d1 << endl;
	if (d1>=cs)   //if���治Ҫ�ӷֺţ�����
	{
		cout <<"���ĳɼ����ڵ���600��������һ��"<<endl;
		if(d1<650)
       cout <<"���������˴�"<<endl;
		else if (d1<700)
         cout <<"���������廪"<<endl;
		else
			 cout <<"�������˱���"<<endl;
	}
	else if(d1>=400)
	{
		cout <<"�������˶���"<<endl;
	}
	else
	{
	cout <<"��û�п��ϴ�ѧ"<<endl;
	}
	

	system("pause");
	return 0;
}