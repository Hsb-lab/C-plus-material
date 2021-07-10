//random_shuffle
//����������ϴ�� ָ����Χ�ڵ�Ԫ�������������

//����ԭ�ͣ�
//random_shuffle(iterator beg,iterator end);
//ָ����Χ�ڵ�Ԫ�������������
//beg��ʼ������
//end����������

//�ܽ᣺��ϴ���㷨ͬ���������Զ����������ͣ�
//random_shuffleϴ���㷨�Ƚ�ʹ�ã�ʹ��ʱ�ǵü����������

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<ctime>

void Print(int val)
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

	//����ϴ���㷨����˳��
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), Print);
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

	//���ز�����
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
	v.emplace_back("��������Σ����ţ�", 16);
	v.emplace_back("ͩ�Ⱥ���", 15);
	v.emplace_back("����", 14);
	v.emplace_back("����", 16);
	v.emplace_back("������", 17);

	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(),Person());
	cout << endl;
}


int main()
{
	srand((unsigned int)time(NULL));
	//test01();
	test02();
}