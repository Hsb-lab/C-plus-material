//set大小和交换
//功能描述：统计set容器大小以及交换set容器

//函数原型：
//1.size();//返回容器中元素的数目
//2.empty();//判断容器是否为空
//3.swap(st);//交换两个集合容器

//总结：
//统计大小——size
//判断是否为空——empty
//交换容器——swap

#include<iostream>
using namespace std;
#include<set>

void PrintSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//大小
void test01()
{
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//打印容器
	PrintSet(s1);

	//判断是否为空
	if (s1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "容器中元素个数为：" << s1.size() << endl;
	}
}

//交换
void test02()
{
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>s2;

	//插入数据
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "交换前" << endl;
	PrintSet(s1);
	PrintSet(s2);

	cout << "交换后" << endl;
	s1.swap(s2);
	PrintSet(s1);
	PrintSet(s2);
}

int main()
{
	//test01();
	test02();
}