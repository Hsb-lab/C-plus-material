//1.vector��������������� �� �Զ�����������
//2.vector����Ƕ��vector����
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

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
	string m_Name;
	int m_Age;
};

template<typename T>
void func(T num)
{
	cout << num << " ";
}
template<>
void func(Person num)
{
	cout << num.m_Name;
}
template<>
void func(vector<int> num)
{
	for (vector<int>::iterator it = num.begin(); it != num.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector�洢���õ���������
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//��һ�ֱ�����ʽ  �����ɹ�
	//vector<int>::iterator it = v.begin();
	//while (it != v.end())
	//{
	//	cout << *it << " ";
	//	it++;
	//}

	//�ڶ��ֱ�����ʽ  �����ɹ�
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;

	//�����б�����ʽ ����ϵͳ�ṩ�� for_each �����������˻ص��ļ�����
	for_each(v.begin(), v.end(), func<int>);
	cout << endl;


}

//vector�洢�Զ������������
void test02()
{
	Person p1("��������Զϲ��",18);
	Person p2("���������", 16);
	vector<Person>v;
	v.push_back(p1);
	v.push_back(p2);
	//for_each(v.begin(), v.end(), func<Person>);
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_Name;
	}
	cout << endl;
}

//vector����Ƕ��vector����
void test03()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}
	vector< vector<int> > v;
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	for_each(v.begin(), v.end(), func<vector<int>>);

	//for (vector<vector<int>> ::iterator vit = v.begin(); vit != v.end(); vit++)
	//{
	//	for (vector<int>::iterator it = (*vit).begin(); it != (*vit).end(); it++)
	//	{
	//		cout << *it << " ";
	//	}
	//	cout << endl;
	//}

}

int main()
{
	//test01();
	//test02();
	test03();
}