//类模板分文件编写
//学习目标：
//掌握类模板成员函数分文件编写产生的问题以及解决方式

//问题：
//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//解决：
//1.解决方式1：直接包含.cpp源文件
//2.解决方式2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制

//总结：
//主流的解决方法是第二种，将类模板成员函数写到一起，并将后缀名改为.hpp

#include<iostream>
using namespace std;
#include<string>

//第一种解决方式，直接包含源文件
//#include"Person.cpp"

//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
#include"Person.hpp"

void test01()
{
	Person<string, int>p("Jerry", 18);
	p.ShowPerson();
}

int main()
{
	test01();
}