//逻辑仿函数（返回值为bool数据类型）
//功能描述：实现逻辑运算

//函数原型：
//1.template<class T> bool logical_and<T>;//逻辑与
//2.template<class T> bool logical_or<T>;//逻辑或
//3.template<class T> bool logical_not<T>;//逻辑非

//总结：
//逻辑仿函数实际运用少，了解即可

#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//利用逻辑非 将容器v搬运到容器v2中，并执行取反操作
	vector<bool>v2;
	//必须要提前开辟空间
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	bool a = 5 > 10;
	bool b;
	logical_not<bool>p1;
	b = p1(a);
	cout << "a = " << a << " b = " << b << endl;

	logical_and<bool>p2;
	cout <<"逻辑与："<<p2(a,b) << endl;

	logical_or<bool>p3;
	cout << "逻辑或：" << p3(a, b) << endl;
}

int main()
{
	//test01();
	test02();
}