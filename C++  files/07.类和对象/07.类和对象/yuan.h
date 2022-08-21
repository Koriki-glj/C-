#include <iostream>
using namespace std;
#pragma once;
#include"point.h"

//创建圆类
class circle
{
//成员属性
private:
	int r;
//类内可以包括另一个类
point yxin;

//成员函数
public:
//半径
void set_r(int m_r);


int get_r();

//圆心

void set_dian(point dian);
	

point get_dian();
	
};