#include"yuan.h"
//写函数实现，即函数定义
void circle::set_r(int m_r)
{
	r=m_r;
}

int circle::get_r()
{
	return r;
}
//圆心

void circle::set_dian(point dian)
{
	yxin=dian;
}

point circle::get_dian()
{
	return yxin;
}
