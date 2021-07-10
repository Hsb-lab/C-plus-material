//string查找和替换
//功能描述：
//查找：查找指定字符串是否存在
//替换：在指定的位置替换字符串

//函数原型：
//1.int find(const string &str , int pos = 0)const;//查找str第一次出现位置，从pos开始查找
//2.int find(const char * s , int pos = 0)const;//查找s第一次出现位置，从pos开始查找
//3.int find(const char * s , int pos , int n)const;//从pos位置查找s的前n个字符第一次位置
//4.int find (const char c , int pos = 0)const;//查找字符c第一次出现位置
//5.int rfind(const string &str , int pos = npos)const;//查找str最后一次位置，从pos开始查找
//6.int rfind(const char * s , int pos = npos)const;//查找s最后一次位置，从pos开始查找
//7.int rfind(const char * s , int pos ， int n)const;//从pos查找s的前n个字符最后一次位置
//8.int rfind (const char c , int pos = 0)const;//查找字符c最后一次出现位置
//9.string & replace（int pos ， int n，const string & str）;//替换从pos开始n个字符为字符串str
//10.string & replace（int pos ， int n，const char * s）;//替换从pos开始n个字符为字符串s

//总结：
//find查找是从左往右，rfind从右往左
//find找到字符串后返回查找的第一次字符位置，找不到返回-1
//replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串

#include<iostream>
using namespace std;

void test01()
{
	//1.查找
	//从0开始索引
	//未找到字符串返回-1
	string str1 = "abcdefgde";
	int pos = str1.find("df");
	if (pos == -1)  cout << "未找到字符串" << endl;
	else            cout << "pos = " << pos << endl;

	//rfind
	//rfind从右往左查找  find从左往右查找
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

void test02()
{
	//2.替换
	string str1 = "abcdefg";

	//从1号位置起3个字符，替换为1111
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;

}


int main()
{
	//test01();
	test02();
}