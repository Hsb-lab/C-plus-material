//�����ǳ����
//ǳ�������򵥵ĸ�ֵ��������
//������ڶ�����������ռ䣬���п�������

//�ܽ᣺
//����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯�����Խ��ǳ��������������

#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age,int height)
	{
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
		m_Height = new int (height);
	}
	Person(const Person& p)
	{
		this->m_Age = p.m_Age;
		//�ڶ������´���һ���ڴ棬����ڴ��ظ��ͷŵ�����
		//this->m_Height = p.m_Height;������Ĭ��ʵ�־������д���
		this->m_Height =new int (*p.m_Height);
	}


	~Person()
	{
		cout << "Person��������������" << endl;
		//���������ٵ������ͷ�
		//֪ʶ���䣺ջ�������ɱ������Զ��ͷţ���ź����Ĳ���ֵ���ֲ�������
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;//��ֹ����Ұָ��
		}
	}
	int m_Age;//����
	int* m_Height;//���
};

void test01()
{
	Person p1(18,160);
	cout << "p1�����䣺" << p1.m_Age << endl;
	cout << "p1����ߣ�" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p2�����䣺" << p2.m_Age << endl;
	cout << "p2����ߣ�" << *p2.m_Height << endl;
}

int main()
{
	test01();
}