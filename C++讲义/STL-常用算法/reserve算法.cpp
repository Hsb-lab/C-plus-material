//reserve
//功能描述：将容器内元素反转

//函数原型：
//reverse(iterator beg,iterator end);

//反转指定范围的元素
//beg开始迭代器
//end结束迭代器

//总结；
//reverse反转区间内的元素，面试题中可能涉及到

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

	//对反转前进行打印
	cout << "反转前" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "--------------" << endl;
	cout << "反转后" << endl;
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
		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person>v;
	v.emplace_back("洪SB", 18);
	v.emplace_back("结城明日奈", 16);

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