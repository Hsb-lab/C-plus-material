//�������캯���ĵ���ʱ��
//c++�п������캯������ʱ��ͨ�����������
#include <iostream>
using namespace std;
class Person
{public :
	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}

	Person(int Age)
	{
		m_Age = Age;
		cout << "Person�вι��캯������" << endl;
	}

	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person�������캯������" << endl;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}
	int m_Age = 0;
};
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << endl;
}

//2.ֵ���ݵķ�ʽ������������ֵ
void dowork(Person p)
{

}

void test02()
{
	Person p;
	dowork(p);//ֵ���ݵı��ʻ´��һ����ʱ�ĸ���
}
//3.��ֵ��ʽ���ؾֲ����󣨲�Ҫ���ؾֲ�������ָ������ã�
Person dowork2()
{
	Person  p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person p = dowork2();
	cout << (int*)&p << endl;
}
int main()
{
	//test01();
	//test02();
	test03();
}
//���캯���ĵ��ù���
//Ĭ������£�c++���������ٸ�һ���������������
//1.Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
//2.Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
//3.Ĭ�Ͽ��������������Խ���ֵ����

//���캯�����ù������£�
//1.����û������вι��캯����c++�������ṩĬ�Ϲ��죬���ǻ��ṩĬ�Ϲ��캯��
//2.����û����忽�����캯����c++�����ṩ�������캯��