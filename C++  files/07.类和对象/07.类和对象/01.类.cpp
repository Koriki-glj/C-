/*封装的意义：

* 将属性和行为作为一个整体，表现生活中的事物
* 将属性和行为加以权限控制*/

#include<iostream>
using namespace std;

const double pi=3.14;

//创建一个类，名字叫yuan
class yuan
{
	//权限
public:

	//属性（一般设置变量）
	double mr;

	//行为（一般设置函数）
	double zc()
	{
		return 2*pi*mr;

	}
};

int main()
 {

	yuan c1;  //用类创建对象，进行实例化

	c1.mr=10.0;

	double jg=c1.zc();
	
	cout<< "周长为："<<jg<<endl;
	system("pause");

	return 0;
  }