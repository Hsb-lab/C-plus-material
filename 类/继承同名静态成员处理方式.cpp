//继承同名静态成员处理方式
//问题：继承中同名的静态成员在子类上如何访问
//静态成员和非静态成员出现同名，处理方式一致

//静态成员变量特点：编译阶段分配内存，所有对象共享同一份数据，内类声明，类外初始化
//静态成员函数只能访问静态成员变量     常对象只能调用常函数

//1.访问子类同名成员 直接访问即可
//2.访问父类同名成员 需要加作用域
#include <iostream>
using namespace std;
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base - static void func()调用" << endl;
	}
	static void func(int a)
	{
		cout << "Base - static void func(int a)调用" << endl;
	}
};
int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son - static void func()调用" << endl;
	}
};
int Son::m_A = 200;

//同名静态成员属性
void test01()
{
//1.通过对象访问静态变量
	Son s;
	cout << "Son - m_A = " << s.m_A << endl;
	cout << "Base - m_A = " << s.Base::m_A << endl;
//2.通过类名访问静态成员变量
	cout << "通过类名访问：" << endl;
	cout << "Son - m_A = " << Son::m_A << endl;
	//第一个：：代表通过类名方式访问，第二个：：代表访问父类作用域下
	cout << "Base - m_A = " << Son::Base::m_A << endl;
}
void test02()
{
//1.通过对象访问静态成员函数
	Son s;
	cout << "通过对象访问静态成员函数" << endl;
	s.func();
	s.Base::func();
//2.通过类名访问静态成员函数
	cout<<"通过类名访问静态成员函数"<<endl;
	Son::func();
	Son::Base::func();
	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
	//如果想访问父类中被隐藏同名成员函数，需要加作用域
	Son::Base::func(100);
}
int main()
{
	//test01();
	test02();
}