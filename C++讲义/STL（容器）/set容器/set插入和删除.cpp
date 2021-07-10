//set插入和删除
//功能描述：set容器进行插入数据和删除数据

//函数原型：
//1.insert(elem);//在容器中插入元素
//2.clear();//清除所有元素
//3.erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器
//4.erase(beg,end);//删除区间[beg,end)的所有元素，返回下一个元素的迭代器
//5.erase(elem);//删除容器中值为elem的元素
//（list容器中有remove的操作）

//总结：
//1.插入——insert
//2.删除——erase
//3.清空——clear

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

	//插入
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	//遍历
	PrintSet(s1);

	//删除
	s1.erase(s1.begin());
	PrintSet(s1);

	//删除重载版本
	s1.erase(30);
	PrintSet(s1);

	//清空
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	PrintSet(s1);
}

int main()
{
	test01();
}