//count（返回值为int数据类型）
//功能描述：统计元素个数

//函数原型：
//count(iterator beg,iterator end,value);
//统计元素出现次数
//beg开始迭代器
//end结束迭代器
//value统计的元素

//总结：
//统计自定义数据类型的时候，需要配合重载operator==

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//统计内置数据类型
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
	cout << "元素个数为：" << num << endl;
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

//统计自定义数据类型
void test02()
{
	vector<Person>v;

	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("诸葛亮", 35);

	int num = count(v.begin(), v.end(), p);
	cout << "与" << p.m_Name << "同年龄的人员数量为：" << num << "个" << endl;
}

int main()
{
	//test01();
	test02();
}