//transform
//功能描述：
//搬运一个容器到另一个容器中

//函数原型：
//transform(iterator beg1,iterator end1,iterator beg2,_func);
//beg1原容器开始迭代器
//end1原容器结束迭代器
//beg2目标容器开始迭代器
//_func函数或者函数对象

//总结：
//搬运的目标容器必须要提前开辟空间，否则无法正常搬运

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

class Transform
{
public:
	int operator()(int v)
	{
		return v;
	}
};

class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget;
	//目标容器要提前开辟空间
	//必须要提前制定大小（这个点再错我是SB）
	vTarget.resize(v.size(),1);

	vTarget.push_back(1000);
	vector<int>::iterator it = vTarget.begin();

	transform(v.begin(), v.end(), it, Transform());
	for_each(vTarget.begin(), vTarget.end(), myPrint());
	cout << endl;
}

int main()
{
	test01();
}