//deque数据存取
//功能描述：对deque中的数据的存取操作

//函数原型：
//1.at(int idx);//返回索引idx所指的数据
//2.operator[];//返回索引idx所指的数据
//3.front();//返回容器中第一个数据元素
//4.back();//返回容器中最后一个元素

#include<iostream>
using namespace std;
#include<deque>

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//通过[]
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;

	//通过at()
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素为：" << d.front() << endl;
	cout << "最后一个元素为：" << d.back() << endl;
}

int main()
{
	test01();
}