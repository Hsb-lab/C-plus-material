//�������Ϊ���Ա
//c++���еĳ�Ա��������һ����Ķ������ǳƸĳ�ԱΪ�����Ա
//�������������Ϊ�����Ա������ʱ���ȹ���������ڹ�������
//������˳���빹���෴


//��ʼ���б�
//���ã�c++�ṩ�˳�ʼ���б��﷨��������ʼ������
#include <iostream>
using namespace std;
class Person
{public :
	//��ͳ��ʼ������
	//Person(int a, int b, int c)
	//{
	//	m_A = a; m_B = b; m_C = c;
	//}

	

	//��ʼ���б��ʼ������
	Person(int A,int B,int C) :m_A(A), m_B(B), m_C(C)
	{

	}

	int m_A = 0, m_B = 0, m_C = 0;
};

void test01()
{
	//Person p(10, 20, 30);
	Person p(30,20,10);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

int main()
{
	test01();

}
