#include <iostream>
using namespace std;
#pragma once;
#include"point.h"

//����Բ��
class circle
{
//��Ա����
private:
	int r;
//���ڿ��԰�����һ����
point yxin;

//��Ա����
public:
//�뾶
void set_r(int m_r);


int get_r();

//Բ��

void set_dian(point dian);
	

point get_dian();
	
};