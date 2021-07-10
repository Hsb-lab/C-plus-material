//random_shuffle
//功能描述：洗牌 指定范围内的元素随机调整次序

//函数原型：
//random_shuffle(iterator beg,iterator end);
//指定范围内的元素随机调整次序
//beg开始迭代器
//end结束迭代器

//总结：（洗牌算法同样适用于自定义数据类型）
//random_shuffle洗牌算法比较使用，使用时记得加随机数种子

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<ctime>

void Print(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//利用洗牌算法打乱顺序
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), Print);
	cout << endl;

}

class Person
{
public:
	Person()
	{
		this->m_Name = "SB";
		this->m_Age = 250;
	}

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//重载操作符
	void operator()(Person &p)
	{
		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person>v;
	v.emplace_back("洪SB", 18);
	v.emplace_back("结城明日奈（老婆）", 16);
	v.emplace_back("桐谷和人", 15);
	v.emplace_back("西莉卡", 14);
	v.emplace_back("利兹", 16);
	v.emplace_back("克莱因", 17);

	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(),Person());
	cout << endl;
}


int main()
{
	srand((unsigned int)time(NULL));
	//test01();
	test02();
}