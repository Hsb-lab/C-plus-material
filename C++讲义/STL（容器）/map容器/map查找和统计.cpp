//map查找和统计
//功能描述：
//对map容器进行查找数据以及统计数据

//函数原型：
//1.find(key);//查找key是否存在，若存在，返回改建的元素的迭代器；若不存在，返回map.end();
//2.count(key);//统计key的元素个数

//总结：
//1.查找——find（返回的是迭代器）
//2.统计——count（对于map而言，结果为0或1）

#include<iostream>
using namespace std;
#include<map>

void test01()
{
	//查找
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));

	map<int,int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "查找到元素" << endl;
		cout << "key = " << (*pos).first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "未查找到元素" << endl;
	}

	//统计（结果为0或1）
	//map不允许插入重复的key值
	int num = m.count(3);
	cout << "num = " << num << endl;
}

int main()
{
	test01();
}