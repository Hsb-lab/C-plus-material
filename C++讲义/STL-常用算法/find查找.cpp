//���ò����㷨
//ѧϰĿ�꣺���ճ��õĲ����㷨

//�㷨��飺
//1.find;//����Ԫ��
//2.find_if;//����������Ԫ��
//3.adjacent_find;//���������ظ�Ԫ��
//4.binary_search;//���ֲ��ҷ�
//5.count;//ͳ��Ԫ�ظ���
//6.count_if;//������ͳ��Ԫ�ظ���

//find
//��������������ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()

//����ԭ�ͣ�
//find(iterator beg,iterator end,value);
//���ղ���Ԫ�أ��ҵ�����ָ��λ�õĵ��������Ҳ������ؽ���������end();
//beg��ʼ������
//end����������
//value���ҵ�Ԫ��

//�ܽ᣺
//����find��������������ָ����Ԫ�أ�����ֵ�ǵ�����

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//�������õ���������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it =  find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "Ϊ���ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "���ҵ�Ԫ�أ�" << *it << endl;
	}
}

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person &p)const
	{
		//����д��������
		//if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) return true;
		//else return false;

		return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
	}

	string m_Name;
	int m_Age;
};

//�����Զ������������
void test02()
{
	vector<Person>v;

	//��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//���뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//��������
	Person pp(p2);

	//Ҫ��Person���������� ==
	//�õײ��find֪����ζԱ�Person��������
	vector<Person>::iterator it = find(v.begin(), v.end(),pp);

	if (it == v.end())
	{
		cout << "δ���ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "���ҵ���Ԫ��" << endl;
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}

int main()
{
	//test01();
	test02();
}