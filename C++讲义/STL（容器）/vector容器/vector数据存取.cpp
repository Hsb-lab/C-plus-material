//vector数据存取（斯巴拉西）（超级方便）
//功能描述：对vector中的数据的存取操作

//函数原型：
//1.at(int idx);//返回索引idx所指的数据
//2.operator[];//返回索引idx所指的数据
//3.front();//返回容器中第一个数据元素
//4.front();//最后一个数据元素

#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//利用[]方式访问数组中元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用at方式访问数组中元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//获取第一个元素
	cout << "第一个元素为：" << v1.front() << endl;

	//获取最后一个元素
	cout << "最后一个元素为：" << v1.back() << endl;
}

int main()
{
	test01();
}