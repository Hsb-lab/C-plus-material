//string字符串比较
//功能描述：
//字符串之间的比较

//比较方式：
//字符串比较是按字符的ASCII码进对比
//= 返回0
//> 返回1
//< 返回-1

//函数原型：
//int compare(const string & s);//与字符串s比较
//int compare(const char * s);//与字符串s比较

//总结：
//字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大

#include<iostream>
using namespace std;

void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1 等于 str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1  大于 str2" << endl;
	}

	else
	{
		cout << "str1  小于 str2" << endl;
	}


}

int main()
{
	test01();
}