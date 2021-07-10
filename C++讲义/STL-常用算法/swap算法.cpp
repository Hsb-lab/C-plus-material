//swap
//功能描述：互换两个容器的元素

//函数原型：
//swap(container c1,container c2);
//互换两个容器的元素
//c1容器1
//c2容器2

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
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "交换前" << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;

	cout << "---------------------------------------" << endl;
	cout << "交换后" << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
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

	void operator()(const Person &p)const
	{
		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person>v1;
	vector<Person>v2;

	v1.emplace_back("结城明日奈", 16);
	v2.emplace_back("亚丝娜", 16);

	swap(v1, v2);
	for_each(v1.begin(), v1.end(),Person());
	cout << endl;
	for_each(v2.begin(), v2.end(),Person());
	cout << endl;
}

int main()
{
	//test01();
	test02();
}