//STL-常用算法
//概述：
//1.算法主要是由头文件 #include<algorithm> #include<numeric> #include<functional>组成
//2.<algorithm>是所有STL头文件中最大的一个，范围涉及到比较、交换、查找、遍历操作、复制、修改等
//3.<numeric>体积很小，只包括几个在序列上面进行简单数学运算的模板函数
//4.<functional>定义了一些模板类，用以声明函数对象

//常用遍历算法
//学习目标：掌握常用的遍历算法

//算法简介：
//1.for_each;//遍历容器
//2.transform;//搬运容器到另一个容器中

//for_each
//功能描述：实现遍历容器

//函数原型：
//for_each(iterator beg,iterator end,_func);
//遍历算法 遍历容器元素
//beg开始迭代器
//end结束迭代器
//_func函数或者函数对象

//总结：
//for_each在实际开发中是最常用的遍历算法，需要熟练掌握

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//普通函数
void Print01(int val)
{
	cout << val << " ";
}

//仿函数
class Print02
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

	for_each(v.begin(), v.end(), Print01);
	cout << endl;

	for_each(v.begin(), v.end(), Print02());
	cout << endl;
}

int main()
{
	test01();
}