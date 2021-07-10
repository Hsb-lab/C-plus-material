//count_if������ֵ��bool�������ͣ�
//����������������ͳ��Ԫ�ظ���

//����ԭ�ͣ�
//count_if(iterator beg,iterator end,_Pred);
//������ͳ��Ԫ�س��ִ���
//beg��ʼ������
//end����������
//_Predν��

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>

//�º���
class Greater
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

//ͳ��������������
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), Greater());
	cout << "���ҵ���Ԫ�ظ���Ϊ��" << num << endl;
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

	bool operator()(const Person &p)const
	{
		return p.m_Age > 20;
	}

	string m_Name;
	int m_Age;
};

class PersonGreater
{
public:
	bool operator()(const Person& p)const
	{
		return p.m_Age > 20;
	}

};

//ͳ���Զ�����������
void test02()
{
	vector<Person>v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 40);
	Person p5("�ܲ�", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//ͳ�ƴ���20�����Ա����
	int num = count_if(v.begin(), v.end(), Person("���������",16));
	cout << "�������20�����Ա����Ϊ��" << num << endl;
}

int main()
{
	//test01();
	test02();
}