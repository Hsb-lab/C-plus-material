//count������ֵΪint�������ͣ�
//����������ͳ��Ԫ�ظ���

//����ԭ�ͣ�
//count(iterator beg,iterator end,value);
//ͳ��Ԫ�س��ִ���
//beg��ʼ������
//end����������
//valueͳ�Ƶ�Ԫ��

//�ܽ᣺
//ͳ���Զ����������͵�ʱ����Ҫ�������operator==

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//ͳ��������������
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count(v.begin(), v.end(), 40);
	cout << "Ԫ�ظ���Ϊ��" << num << endl;
}

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person&p)const
	{
		return this->m_Age == p.m_Age;
	}

	string m_Name;
	int m_Age;
};

//ͳ���Զ�����������
void test02()
{
	vector<Person>v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("�����", 35);

	int num = count(v.begin(), v.end(), p);
	cout << "��" << p.m_Name << "ͬ�������Ա����Ϊ��" << num << "��" << endl;
}

int main()
{
	//test01();
	test02();
}