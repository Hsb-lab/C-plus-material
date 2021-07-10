//谓词（Pred）
//谓词概念：
//1.返回bool类型的仿函数称为谓词
//2.如果operator()接受一个参数，那么叫做一元谓词
//3.如果operator()接受两个参数，那么叫做二元谓词

//总结：
//参数只有一个的谓词，称为一元谓词

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Greater5
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中 是否有大于5的数字
	//使用匿名函数对象
	vector<int>::iterator it = find_if(v.begin(), v.end(), Greater5());
	if (it == v.end())
	{
		cout << "未找到符合条件的数字" << endl;
	}
	else
	{
		cout << "找到数字" << endl;
		cout << *it << endl;
	}
}

int main()
{
	test01();
}