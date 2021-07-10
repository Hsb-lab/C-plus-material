//set查找和统计
//功能描述：
//对set容器进行查找数据以及统计数据

//函数原型：
//1.find(key);//查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//2.count(key);//统计key的元素个数

//总结：
//1.查找——find（返回的是迭代器）
//2.统计——count（对于set而言，结果为0或1）

#include<iostream>
using namespace std;
#include<set>

void test01()
{
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到该元素" << endl;
	}
}

void test02()
{
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);

	//统计个数
	//对于set而言，统计结果要么是0，要么是1
	int num = s1.count(30);
	cout << "num = " << num << endl;
}

int main()
{
	//test01();
	test02();
}