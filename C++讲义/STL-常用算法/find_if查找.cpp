//find_if
//��������������������Ԫ��

//����ԭ�ͣ�
//find_if(iterator beg,iterator end,_Pred);
//����������Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������end();
//beg��ʼ������
//end����������
//_Pred��������ν�ʣ�����bool���͵ķº�����

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//��ͨ����
//bool Search(int val)
//{
//	return val > 5;
//}

//�º���
class Greater
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

//����������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), Greater());
	if (it == v.end())
	{
		cout << "δ���ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "���ҵ�Ԫ�أ�" << *it << endl;
	}

}

class Person
{
public:
	Person()
	{
		this->m_Name = "SB";
		int age = 250;
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

class Greater20
{
public:
	bool operator()(const Person &p)const
	{
		return p.m_Age > 20;
	}
};

//�����Զ�����������
void test02()
{
	vector<Person>v;

	//��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//v.push_back(p1);
	//v.push_back(p2);
	//v.push_back(p3);
	//v.push_back(p4);

	//���ֲ��뷽ʽ�������ڴ�Ŀ���
	v.emplace_back("aaa", 10);
	v.emplace_back("bbb", 20);
	v.emplace_back("ccc", 30);
	v.emplace_back("ddd", 40);

	//��������ڶ�ʮ�����Ա
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Person());
	if (it == v.end())
	{
		cout << "δ���ҵ�������������Ա" << endl;
	}
	else
	{
		cout << "���ҵ�������������Ա" << endl;
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}

int main()
{
	//test01();
	test02();
}