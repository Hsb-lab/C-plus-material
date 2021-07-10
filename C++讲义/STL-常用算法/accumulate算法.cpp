//常用算术生成算法：
//学习目标：掌握常用的算术生成算法

//注意：
//算术生成算法属于小型算法，使用时包含的头文件为 #include<numeric>

//算法简介：
//1.accumulate;//计算容器元素累计总和
//2.fill;//向容器中添加元素

//accumulate
//功能描述：计算区间内容器元素累计总和

//函数原型：
//accumulate(iterator beg,iterator end,value);
//计算容器元素累计总和
//beg开始迭代器
//end结束迭代器
//value起始值

//总结：
//accumulate使用的头文件注意是numeric，这个算法很实用

#include<iostream>
using namespace std;
#include<vector>
#include<numeric>

void test01()
{
	vector<int>v;
	v.reserve(100);
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	int num = accumulate(v.begin(), v.end(),0);
	cout << num << endl;
}

int main()
{
	test01();
}