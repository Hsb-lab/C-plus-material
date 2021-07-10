//常用拷贝和替换算法
//学习目标：掌握常用的拷贝和替换算法

//算法简介：
//copy;//容器内指定范围的元素拷贝到另一容器中
//replace;//将容器内指定范围的旧元素修改为新元素
//replace_if;//容器内指定范围满足条件的元素替换为新元素
//swap;//互换两个容器的元素

//copy
//功能描述：容器内指定范围的元素拷贝到另一容器中

//函数原型：
//copy(iterator beg,iterator end,iterator dest);
//按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//beg开始迭代器
//end结束迭代器
//dest目标容器起始迭代器

//总结：
//利用copy算法在拷贝时，目标容器记得提前开辟空间

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
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>v2;
	v2.resize(v.size());

	copy(v.begin(), v.end(), v2.begin());

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

	void operator()(Person &p)
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

	vector<Person>v2;
	v2.resize(v.size());

	copy(v.begin(), v.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Person());
}

int main()
{
	//test01();
	test02();
}