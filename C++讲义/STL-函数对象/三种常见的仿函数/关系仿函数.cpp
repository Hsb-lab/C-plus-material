//关系仿函数（返回值为bool数据类型）
//功能描述：实现关系对比

//仿函数原型：
//1.template<class T> bool equal_to<T>;//等于
//2.template<class T> bool not_equal_to<T>;//不等于
//3.template<class T> bool greater<T>;//大于
//4.template<class T> bool greater_equal<T>;//大于等于
//5.template<class T> bool less<T>;//小于
//6.template<class T> bool less_equal<T>;//小于等于

//总结：
//关系仿函数中最常用的就是greater<>大于

#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

class Greater
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
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//降序
	//sort(v.begin(), v.end(),Greater());
	sort(v.begin(), v.end(),greater<int>());

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