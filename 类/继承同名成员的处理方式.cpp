//�̳�ͬ����Ա����ʽ
//���⣺�������븸�����ͬ���ĳ�Ա�����ͨ��������󣬷��ʵ����������ͬ���������أ�

//��������ͬ�� ֱ�ӷ��ʼ���
//���ʸ���ͬ����Ա ��Ҫ��������
#include <iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base - func()����" << endl;
	}
	void func(int a)
	{
		cout << "Base - func()����" << endl;
	}
	int m_A;
};
class Son:public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son - func()����" << endl;
	}
	
	int m_A;
};

//ͬ����Ա���Դ���
void test01()
{
	Son s;
	cout << "Son m_A = " << s.m_A << endl;
	//���ͨ��������� ���ʵ�������ͬ����Ա����Ҫ��������
	cout << "Base m_A = " << s.Base::m_A << endl;
}

//ͬ����Ա��������
void test02()
{
	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������
	//��ͬ����Ա����,�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
	Son s;
	s.Base::func(100);
	s.Base::func();
}
int main()
{
	//test01();
	test02();
}