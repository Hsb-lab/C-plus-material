//常用排序算法
//学习目标：掌握常用的排序算法

//算法简介：
//sort;//对容器内元素进行排序
//random_shuffe;//洗牌 指定范围内的元素随机调整次序
//merge;//容器元素合并，并存储到另一容器中
//reverse；//反转指定范围的元素

//sort
//功能描述：对容器内元素进行排序

//函数原型：
//sort(iterator beg,iterator end ,_Pred);
//按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//beg开始迭代器
//end结束迭代器
//_Pred谓词

//总结：
//sort属于开发中最常用的算法之一，需熟练掌握

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>

//实现打印的仿函数
class Print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}

};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//利用sort进行升序
	sort(v.begin(), v.end());

	for_each(v.begin(), v.end(), Print());
	cout << endl;

	//改变为降序
	//sort(v.begin(), v.end(), Print());
	sort(v.begin(), v.end(),greater<int>());

	for_each(v.begin(), v.end(), Print());
	cout << endl;

}

int main()
{
	test01();
}