//replace_if
//功能描述：将区间内满足条件的元素，替换成指定元素

//函数原型：
//replace_if(iterator beg,iterator end,_Pred,newvalue);
//按条件替换元素，满足条件的替换成指定元素
//beg开始迭代器
//end结束迭代器
//_Pred谓词
//newvalue替换的新元素

//总结：
//replace_if按条件查找，可以利用仿函数灵活筛选满足条件的元素

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void myPrint(int val)
{
	cout << val << " ";
}

class Greater
{
public:
	bool operator()(int val)const
	{
		return val > 30;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);

	//大于30的数字替换为3000
	replace_if(v.begin(), v.end(),Greater(), 3000);

	for_each(v.begin(), v.end(),myPrint);
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

	void operator()(const Person& p)const
	{
		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

	string m_Name;
	int m_Age;

};

class PersonGreater
{
public:
	bool operator()(Person &p)const
	{
		return p.m_Age > 10;
	}
};

void test02()
{
	vector<Person>v;
	v.emplace_back("asfwd", 12);
	v.emplace_back("asfwd", 12);
	v.emplace_back("asfwd", 9);
	v.emplace_back("asfwd", 12);

	replace_if(v.begin(), v.end(), PersonGreater(), Person("gjbkdjkfe", 13));

	for_each(v.begin(), v.end(), Person());
}

int main()
{
	//test01();
	test02();
}