//const��Ա����
//��������
//��Ա�������const�����ǳ�Ϊ�������Ϊ������
//�������ڲ������޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�

//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����
#include <iostream>
using namespace std;
class Person
{public :
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ� 
	//const Person   *const this ; 
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson()  const //������
	{
		//this->m_A = 100;
		//this = NULL;//thisָ�벻�����޸�ָ���ָ��
		m_B = 100;
	}

	void func() { m_A = 100; }
	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ ���Ϲؼ��� mutable(�ɱ��)
	//mutabe �����ϵ�ģʽ
};

void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;
	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}

int main()
{
	//Person p[];//���� class�����Դ�������
	test01();
	test02();
}