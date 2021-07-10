//reserve
//������������������Ԫ�ط�ת

//����ԭ�ͣ�
//reverse(iterator beg,iterator end);

//��תָ����Χ��Ԫ��
//beg��ʼ������
//end����������

//�ܽ᣻
//reverse��ת�����ڵ�Ԫ�أ��������п����漰��

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

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//�Է�תǰ���д�ӡ
	cout << "��תǰ" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "--------------" << endl;
	cout << "��ת��" << endl;
	vector<int>::iterator it = v.begin();
	it++;
	reverse(it, v.end());
	for_each(v.begin(), v.end(), myPrint);
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

	void operator()(const Person &p)const
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

	for_each(v.begin(), v.end(), Person());
	cout << endl;

	reverse(v.begin(), v.end());

	for_each(v.begin(), v.end(), Person());
	cout << endl;

}

int main()
{
	//test01();
	test02();
}