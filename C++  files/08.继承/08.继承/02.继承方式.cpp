#include<iostream>
using namespace std;
//�����������κμ̳з�ʽ�����ʲ��˸����˽�г�Ա
//�����г���˽��Ȩ���µĳ�Ա�⣬��������Ȩ���µĳ�Ա�����Ա�������ʣ�����Ȩ�޻������仯��
/*���ǹ����̳У��Ӹ�����Ȩ�޲���ı䣻���Ǳ����̳У��Ӹ����ӻ��Ϊ����Ȩ�ޣ�������Ĺ���Ȩ�޵�������Ϊ����Ȩ�ޣ���
	����˽�м̳У��Ӹ����ӻ��Ϊ˽��Ȩ�ޡ����ǽ��������������Դ����Լ��ĳ�Ա����������������Ϳ��Է��ʸ����еĳ�Ա��*/

//����
class fuqin
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;

};

//����
//�����̳�
class son1 : public fuqin
{
public:
	void func1()
	{
			m_a=10;
			
	}
protected:
	void func2()
	{
		m_b=11;
		
	}
private:
	void func3()
	{
		
		//m_c=12;  ���ʲ��˸����е�˽�г�Ա
	}
};


//�����̳�
class son2 : protected fuqin
{
	public:
	void func1()
	{
			m_a=10;
			m_b=11;

			cout<<"����m_b: "<<m_b<<endl;
	}
protected:
	void func2()
	{
		m_b=11;
		
	}
private:
	void func3()
	{
		//m_c=12;  //���ʲ��˸����е�˽�г�Ա
	}
};

//˽�м̳�
class son3 : private fuqin
{
	public:
		
	void func1()
	{
			m_a=10;
			m_b=11;

			cout<<"˽��m_b: "<<m_b<<endl;
	}
protected:
	void func2()
	{
		m_b=11;
		
	}
private:
	void func3()
	{
		//m_c=12;  //���ʲ��˸����е�˽�г�Ա
	}
};


void test01()
{
	son2 s2;
	s2.func1();
	son3 s3;
	s3.func1();
	//s2.m_a
	//s3.m_a=1000;
		//s3.m_b=1000;
	
	
};


int main()
 {

	test01();
	


	system("pause");

	return 0;
  }