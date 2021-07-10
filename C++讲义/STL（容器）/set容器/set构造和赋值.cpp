//set/multiset容器
//set基本概念
//简介：所有元素都会在插入时自动被排序

//本质：set/multiset属于关联式容器，底层结构使用二叉树结构实现

//set和multiset区别：
//1.set不允许容器中有重复的元素
//2.multiset允许容器中有重复的元素

//set构造和赋值
//功能描述：创建set容器以及赋值

//函数原型：
//构造：
//1.set<T>st;//默认构造函数
//2.set(const set &st);//拷贝构造函数

//赋值：
//set & operator= (const set &st);//重载等号操作符

//总结：
//1.set容器插入数据时用insert
//2.set容器插入的数据会自动排序

#include<iostream>
using namespace std;
#include<set>

void PrintSet(set<int>s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;

	//插入数据只有insert方式
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);
	
	//遍历容器
	//set容器特点：
	//1.所有元素插入时自动被排序
	//2.set容器不允许插入重复值
	PrintSet(s1);

	//拷贝构造
	set<int>s2(s1);
	PrintSet(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	PrintSet(s3);
}

int main()
{
	test01();
}
