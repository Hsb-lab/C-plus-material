//继承
//继承是面向对象的三大特性之一
//下级别的成员除了拥有上一级的共性，还有自己独特的属性
//这个时候我们可以考虑利用继承的技术，减少重复的代码
//继承的基本语法
#include<iostream>
using namespace std;
//继承实现页面
class BasePage//公共页面类
{public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
};
//继承的好处：减少重复的代码
//语法：class 子类：继承方式  父类
//专业术语：子类 也称为 派生类 ；父类 也称为 基类
//Java页面
class Java : public BasePage
{
public : 
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
//Python页面
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
//C++页面
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "CPP学科视频" << endl;
	}
};
void test01()
{
	cout << "Java下载视频页面如下：" << endl;
	Java ja; ja.header(); ja.footer(); ja.left(); ja.content();
	cout << "----------------------------------------------------------------" << endl;
	cout << "Java下载视频页面如下：" << endl;
	Python python; python.header(); python.footer(); python.left(); python.content();
	cout << "----------------------------------------------------------------" << endl;
	cout << "Java下载视频页面如下：" << endl;
	CPP cpp; cpp.header(); cpp.footer(); cpp.left(); cpp.content();

}
int main()
{
	test01();
}