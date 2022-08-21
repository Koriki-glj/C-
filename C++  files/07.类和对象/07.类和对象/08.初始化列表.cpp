#include<iostream>
using namespace std;
class test
{
public:
	int a;
	int b;
	int c;

	test(int ma,int mb,int mc):a(ma),b(mb),c(mc)
	{

	}
	void test01()
      {

		cout<< "a="<<a<<"b="<< b<<"c="<<c<<endl;
      }
};


int main()
 {

	test p(10,20,30);
	cout<<"a: "<<p.a<<endl;
    p.test01();
	


	system("pause");

	return 0;
  }