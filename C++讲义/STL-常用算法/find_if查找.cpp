//find_if
//功能描述：按条件查找元素

//函数原型：
//find_if(iterator beg,iterator end,_Pred);
//按条件查找元素，找到返回指定位置迭代器，找不到返回结束迭代器end();
//beg开始迭代器
//end结束迭代器
//_Pred函数或者谓词（返回bool类型的仿函数）

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

//普通函数
//bool Search(int val)
//{
//	return val > 5;
//}

//仿函数
class Greater
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

//查找内置数据类型
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
		cout << "未查找到元素" << endl;
	}
	else
	{
		cout << "查找到元素：" << *it << endl;
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

//查找自定义数据类型
void test02()
{
	vector<Person>v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//v.push_back(p1);
	//v.push_back(p2);
	//v.push_back(p3);
	//v.push_back(p4);

	//这种插入方式减少了内存的开辟
	v.emplace_back("aaa", 10);
	v.emplace_back("bbb", 20);
	v.emplace_back("ccc", 30);
	v.emplace_back("ddd", 40);

	//找年龄大于二十岁的人员
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Person());
	if (it == v.end())
	{
		cout << "未查找到符合条件的人员" << endl;
	}
	else
	{
		cout << "查找到符合条件的人员" << endl;
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}

int main()
{
	//test01();
	test02();
}