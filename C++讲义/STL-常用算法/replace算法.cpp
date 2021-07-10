//replace
//功能描述：将容器内指定范围的旧元素修改为新元素

//函数原型：
//replace(iterator beg,iterator end,oldvalue,newvalue);
//将区间内旧元素 替换成 新元素
//beg开始迭代器
//end结束迭代器
//oldvalue旧元素
//newvalue新元素

//总结：
//replace会替换区间内满足条件的元素

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(20);

	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{
	test01();
}