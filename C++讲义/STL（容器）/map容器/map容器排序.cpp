//map容器排序
//学习目标：
//map容器默认排序规则为按照key值进行从大到小排序，掌握如何改变排序规则

//主要技术点：
//利用仿函数，可以改变排序规则

//总结：
//利用仿函数可以指定map容器的排序规则
//对于自定义数据类型，map必须要指定排序规则，同set容器

#include<iostream>
using namespace std;
#include<map>

class MyCompare
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};

void test01()
{
	map<int, int,MyCompare>m;

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

int main()
{
	test01();
}