//继承同名成员处理方式
//问题：当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？

//访问子类同名 直接访问即可
//访问父类同名成员 需要加作用域
#include <iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base - func()调用" << endl;
	}
	void func(int a)
	{
		cout << "Base - func()调用" << endl;
	}
	int m_A;
};
class Son:public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son - func()调用" << endl;
	}
	
	int m_A;
};

//同名成员属性处理
void test01()
{
	Son s;
	cout << "Son m_A = " << s.m_A << endl;
	//如果通过子类对象 访问到父类中同名成员，需要加作用域
	cout << "Base m_A = " << s.Base::m_A << endl;
}

//同名成员函数处理
void test02()
{
	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有
	//的同名成员函数,如果想访问到父类中被隐藏的同名成员函数，需要加作用域
	Son s;
	s.Base::func(100);
	s.Base::func();
}
int main()
{
	//test01();
	test02();
}