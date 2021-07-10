//1.vector存放内置数据类型 和 自定义数据类型
//2.vector容器嵌套vector容器
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

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
	string m_Name;
	int m_Age;
};

template<typename T>
void func(T num)
{
	cout << num << " ";
}
template<>
void func(Person num)
{
	cout << num.m_Name;
}
template<>
void func(vector<int> num)
{
	for (vector<int>::iterator it = num.begin(); it != num.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector存储内置的数据类型
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//第一种遍历方式  遍历成功
	//vector<int>::iterator it = v.begin();
	//while (it != v.end())
	//{
	//	cout << *it << " ";
	//	it++;
	//}

	//第二种遍历方式  遍历成功
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;

	//第三中遍历方式 利用系统提供的 for_each 函数（利用了回调的技术）
	for_each(v.begin(), v.end(), func<int>);
	cout << endl;


}

//vector存储自定义的数据类型
void test02()
{
	Person p1("洪世博永远喜欢",18);
	Person p2("结城明日奈", 16);
	vector<Person>v;
	v.push_back(p1);
	v.push_back(p2);
	//for_each(v.begin(), v.end(), func<Person>);
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).m_Name;
	}
	cout << endl;
}

//vector容器嵌套vector容器
void test03()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}
	vector< vector<int> > v;
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	for_each(v.begin(), v.end(), func<vector<int>>);

	//for (vector<vector<int>> ::iterator vit = v.begin(); vit != v.end(); vit++)
	//{
	//	for (vector<int>::iterator it = (*vit).begin(); it != (*vit).end(); it++)
	//	{
	//		cout << *it << " ";
	//	}
	//	cout << endl;
	//}

}

int main()
{
	//test01();
	//test02();
	test03();
}