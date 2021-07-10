//pair队组创建（不需要包含头文件）
//功能描述：
//成对出现的数据，利用队组可以返回两个数据

//两种创建方式：
//1.pair<type,type>p(value1,value2);
//2.pair<type,type>p = make_pair(value1,value2);

//总结：
//两种方式都可以创建数组，记住一种即可
#include<iostream>
using namespace std;

void test01()
{
	//第一种方式
	pair<string, int>p("Tom", 20);
	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;

	//第二种方式
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

int main()
{
	test01();
}