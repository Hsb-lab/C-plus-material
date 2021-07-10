//list容器
//list基本概念
//功能：将数据进行链式存储
//链表（list）：是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序
//是通过链表中的指针链接实现的

//链表的组成：链表由一系列点组成

//结点的组成：一个是存储数据元素的数据域，另一个是存储下一个结点的指针域（数据域和指针域）

//STL中的链表是一个双向循环链表

//由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持迁移和后移，属于双向迭代器

//list的优点：
//1.采用动态存储分配，不会造成内存浪费和溢出
//2.链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素

//list的缺点：
//1.链表灵活，但是空间（指针域）和时间（遍历）额外耗费较大

//list有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的

//总结：
//STL中list和vector是两个最常被使用的容器，各有优缺点

//list构造函数
//功能描述：创建list容器

//函数原型：
//list<T>lst;//list采用模板类实现对象的默认构造形式
//list(beg,end);//构造函数将[beg,end)区间中的元素拷贝给本身
//list(n,elem);//构造函数将n个elem拷贝给本身
//list(const list & lst);//拷贝构造函数

//总结：
//list构造方式同其他几个STL常用容器，熟练掌握即可

#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//创建list容器
	list<int>L1;//默认构造

	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//遍历容器
	printList(L1);

	//区间方式构造
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	//拷贝构造
	list<int>L3(L2);
	printList(L3);

	//n个elem
	list<int>L4(10, 1000);
	printList(L4);
}

int main()
{
	test01();
}