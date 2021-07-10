//���ÿ������滻�㷨
//ѧϰĿ�꣺���ճ��õĿ������滻�㷨

//�㷨��飺
//copy;//������ָ����Χ��Ԫ�ؿ�������һ������
//replace;//��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//replace_if;//������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
//swap;//��������������Ԫ��

//copy
//����������������ָ����Χ��Ԫ�ؿ�������һ������

//����ԭ�ͣ�
//copy(iterator beg,iterator end,iterator dest);
//��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//beg��ʼ������
//end����������
//destĿ��������ʼ������

//�ܽ᣺
//����copy�㷨�ڿ���ʱ��Ŀ�������ǵ���ǰ���ٿռ�

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>v2;
	v2.resize(v.size());

	copy(v.begin(), v.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
}

class Person
{
public:
	Person()
	{
		this->m_Name = "SB";
		this->m_Age = 250;
	}

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void operator()(Person &p)
	{
		cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
	}


	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person>v;
	v.emplace_back("��SB", 18);
	v.emplace_back("���������", 16);

	vector<Person>v2;
	v2.resize(v.size());

	copy(v.begin(), v.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Person());
}

int main()
{
	//test01();
	test02();
}