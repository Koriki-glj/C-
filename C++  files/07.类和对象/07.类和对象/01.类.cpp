/*��װ�����壺

* �����Ժ���Ϊ��Ϊһ�����壬���������е�����
* �����Ժ���Ϊ����Ȩ�޿���*/

#include<iostream>
using namespace std;

const double pi=3.14;

//����һ���࣬���ֽ�yuan
class yuan
{
	//Ȩ��
public:

	//���ԣ�һ�����ñ�����
	double mr;

	//��Ϊ��һ�����ú�����
	double zc()
	{
		return 2*pi*mr;

	}
};

int main()
 {

	yuan c1;  //���ഴ�����󣬽���ʵ����

	c1.mr=10.0;

	double jg=c1.zc();
	
	cout<< "�ܳ�Ϊ��"<<jg<<endl;
	system("pause");

	return 0;
  }