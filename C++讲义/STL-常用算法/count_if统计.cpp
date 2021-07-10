//count_if（返回值是bool数据类型）
//功能描述：按条件统计元素个数

//函数原型：
//count_if(iterator beg,iterator end,_Pred);
//按条件统计元素出现次数
//beg开始迭代器
//end结束迭代器
//_Pred谓词

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>

//仿函数
class Greater
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

//统计内置数据类型
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
	cout << "查找到的元素个数为：" << num << endl;
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

//统计自定义数据类型
void test02()
{
	vector<Person>v;

	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 40);
	Person p5("曹操", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//统计大于20岁的人员个数
	int num = count_if(v.begin(), v.end(), Person("结城明日奈",16));
	cout << "年龄大于20岁的人员数量为：" << num << endl;
}

int main()
{
	//test01();
	test02();
}