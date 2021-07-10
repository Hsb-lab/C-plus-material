//string字符串拼接
//功能描述：实现在字符串末尾拼接字符串

//函数原型：
//1.string & operator+=（const char * str）;//重载+=操作符
//2.string & operator+=（const char c）;//重载+=操作符
//3.string & operator+=（const string & str）;//重载+=操作符
//4.string & append（const char *s);//把字符串s连接到当前字符串结尾
//5.string & append（const char *s ， int n);//把字符串s的前n个字符连接到当前字符串结尾
//6.string & append（const string & s);//同operator+=（const string & str）
//7.string & append（const string & s ， int pos , int n);//字符串s中从pos开始的n个字符连接到字符串结尾
//总结：字符串拼接的重载版本很多，初学阶段记住集中即可
#include<iostream>
using namespace std;
#include<string>

void test01()
{
	//最好不要中英文混搭，中文在C++中不吃香
	string str1 = "我";
	str1 += "永远喜欢结城明日奈!";
	cout << str1 << endl;

	str1 += '!';
	cout << str1 << endl;

	string str2 = "挚爱亚丝娜！";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" love");
	cout << str3<<endl;
	str3.append(" Asuna adcde", 6);
	cout << str3 << endl;

	str3.append(str2);
	cout << str3 << endl;

	str3.append(str2, 3, 3);//三个参数，第二个参数为开始截取的位置，第三个参数为截取的个数
	cout << str3 << endl;
}

int main()
{
	test01();
}