//set容器排序
//学习目标：
//set容器默认排序规则为从大到小，掌握如何改变排序规则

//主要技术点
//利用仿函数，可以改变排序规则
//仿函数本质上是一个类

//set存放自定义数据类型

//总结：
//对于自定义数据类型，set必须指定排序规则才可以插入数据

#include<iostream>
using namespace std;
#include<set>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age > p2.m_Age;
	}

	string m_Name;
	int m_Age;
};

class ComparePerson
{
public:
	bool operator()(const Person &p1,const Person &p2) const
	{
		return p1.m_Age > p2.m_Age;
	}

};

void test01()
{
	//自定义的数据类型 都会指定排序规则
	set<Person, ComparePerson>s;

	//创建Person对象
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}

int main()
{
	test01();
}