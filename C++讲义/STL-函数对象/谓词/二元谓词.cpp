//谓词（Pred）
//谓词概念：
//1.返回bool类型的仿函数称为谓词
//2.如果operator()接受一个参数，那么叫做一元谓词
//3.如果operator()接受两个参数，那么叫做二元谓词


//谓词：
//参数只有两个的谓词，称为二元谓词

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyCompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//使用函数对象 改变算法策略
	sort(v.begin(), v.end(), MyCompare());

	cout << "--------------" << endl;

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test01();
}