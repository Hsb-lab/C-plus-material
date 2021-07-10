//string基本概念
//本质：
//string是C++风格的字符串，而string本质上是一个类

//string和char*的区别：
//1.char*是一个指针
//2.string是一个类，类内部封装了char*，管理这个字符串，是一个char*的容器

//特点：
//string类内部封装了很多成员函方法
//例如：查找find、拷贝copy、删除delete、替换replace、插入insert
//string管理char*所分配的内存，不用担心复制越界等问题，由类内部进行负责

//string构造函数
//构造函数原型：
//1.string（）；//创建一个空的字符，例如：string str；
//2.string（const char *s）；//使用字符串s初始化
//3.string（const string & str）；//使用一个string对象初始化另一个string对象
//4.string（int n，char c）//使用n个字符c初始化
//5.总结：string的多种构造方式没有可比性，灵活运用即可
#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string s1;//默认构造,s1为空字符串

	const char* str = "hello world";
	string s2(str);
	cout << s2 << endl;

	string s3(s2);
	cout << s3 << endl;

	string s4(10,'a');
	cout << s4 << endl;
}

int main()
{
	test01();
}