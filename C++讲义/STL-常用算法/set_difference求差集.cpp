//set_difference
//功能描述：求两个集合的差集

//函数原型：
//set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
//求两个集合的差集
//注意：两个集合必须是有序序列
//beg1容器1开始迭代器
//end1容器1结束迭代器
//beg2容器2开始迭代器
//end2容器2结束迭代器
//dest目标容器开始迭代器

//总结：
//1.求差集的两个集合必须是有序序列
//2.目标容器开辟空间需要两个容器取较大值

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//目标容器
	vector<int>vTarget;
	vTarget.resize( max(v1.size(), v2.size()) );

	vector<int>::iterator pos = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), pos, myPrint);
	cout << endl;

	pos = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), pos, myPrint);
	cout << endl;

}

int main()
{
	test01();
}