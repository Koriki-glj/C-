#include<iostream>
using namespace std;
#include"point.h"
#include"yuan.h"
//ȫ�ֺ�������ϵ�ж�
void isout(point& p1,circle& c)
{
	if((p1.get_x()-c.get_dian().get_x())*(p1.get_x()-c.get_dian().get_x())+(p1.get_y()-c.get_dian().get_y())*(p1.get_y()-c.get_dian().get_y()) == c.get_r() *  c.get_r() )
	{
		cout<<"����Բ��"<<endl;
	}
	else if((p1.get_x()-c.get_dian().get_x())*(p1.get_x()-c.get_dian().get_x())+(p1.get_y()-c.get_dian().get_y())*(p1.get_y()-c.get_dian().get_y()) > c.get_r()*c.get_r() )
	{
		cout<<"����Բ��"<<endl;
	}
	else
	{
		cout<<"����Բ��"<<endl;
	}
};

int main()
 {
	 //����Բ
	 circle c;
	 //�����뾶
	 c.set_r(10);
      //c.get_r();
	 //����Բ������
	 point p;
	p.set_x(10);
	p.set_y(0);
	//p.get_x();
	//p.get_y();
	 c.set_dian(p);
     //c.get_dian();
	 
	 //����һ����
	 point p1;
	 	p1.set_x(10);
	p1.set_y(9);
	//p1.get_x();
	//p1.get_y();
	isout(p1, c);

	system("pause");

	return 0;
  }