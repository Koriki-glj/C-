#include<iostream>
using namespace std;
#include"point.h"
#include"yuan.h"
//全局函数，关系判断
void isout(point& p1,circle& c)
{
	if((p1.get_x()-c.get_dian().get_x())*(p1.get_x()-c.get_dian().get_x())+(p1.get_y()-c.get_dian().get_y())*(p1.get_y()-c.get_dian().get_y()) == c.get_r() *  c.get_r() )
	{
		cout<<"点在圆上"<<endl;
	}
	else if((p1.get_x()-c.get_dian().get_x())*(p1.get_x()-c.get_dian().get_x())+(p1.get_y()-c.get_dian().get_y())*(p1.get_y()-c.get_dian().get_y()) > c.get_r()*c.get_r() )
	{
		cout<<"点在圆外"<<endl;
	}
	else
	{
		cout<<"点在圆内"<<endl;
	}
};

int main()
 {
	 //创建圆
	 circle c;
	 //创建半径
	 c.set_r(10);
      //c.get_r();
	 //创建圆心坐标
	 point p;
	p.set_x(10);
	p.set_y(0);
	//p.get_x();
	//p.get_y();
	 c.set_dian(p);
     //c.get_dian();
	 
	 //创建一个点
	 point p1;
	 	p1.set_x(10);
	p1.set_y(9);
	//p1.get_x();
	//p1.get_y();
	isout(p1, c);

	system("pause");

	return 0;
  }