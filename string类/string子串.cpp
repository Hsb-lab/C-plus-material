//string子串
//功能描述：
//从字符串中获取想要的子串

//函数原型：
//string substr(int pos = 0 , int n = npos)const;//返回由pos开始的n个字符组成的字符串

//总结：
//灵活地运用求子串功能，可以在实际开发中获取有效的信息

#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "abcdef";
	string substr = str.substr(1, 3);
	cout << "sub str = " << substr << endl;
}

void test02()
{
	string email = "Asuna@sina.com";

	//从邮件地址中 获取 用户信息
	int pos = email.find("@");
	string substrName = email.substr(0,pos);
	cout << substrName << endl;
}

int main()
{
	//test01();
	test02();
}