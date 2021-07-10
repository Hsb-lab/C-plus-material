//deque排序
//功能描述：利用算法实现对deque容器进行排序

//算法：
//sort(iterator beg,iterator end);//对beg和end区间内的元素进行排序

//总结：
//sort算法非常实用，使用时包含头文件algorithm即可

#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//标准算法头文件

void printDeque(const deque<int>d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//排序 默认排序规则 从小到大 升序
	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
	cout << "排序前：" << endl;
	printDeque(d);
	sort(d.begin(), d.end());
	//sort(d.rbegin(), d.rend());//降序排序
	cout << "排序后：" << endl;
	printDeque(d);

}

int main()
{
	test01();
}