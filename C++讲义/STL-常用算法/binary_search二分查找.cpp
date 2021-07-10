//binary_search（返回值是bool数据类型）
//功能描述：查找指定元素是否存在

//函数原型：
//bool binary_search(iterator beg,iterator end,value);
//查找指定的元素，查找返回true，否则返回false
//注意：在无序序列中不可用
//beg开始迭代器
//end结束迭代器
//value查找的元素

//总结：
//二分查找法的查找效率很高，值得注意的是查找的容器中的元素必须是有序序列

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//必须是有序的序列
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "查找到元素" << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}

int main()
{
	test01();
}