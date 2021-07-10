//静态成员
//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
//静态成员分为：
//1.静态成员变量：
//所有对象共享同一份数据
//在编译阶段分配内存
//内类声明，内外初始化

//2.静态成员函数：
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
#include <iostream>
using namespace std;
class Person
{public:
	//所有对象都共享同一份数据
	//在编译阶段就分配内存
	//内类声明，内外初始化（这个很重要）(必须的操作，否则无法访问这段内存)
	static int m_A ;//内类声明语法：static 数据类型 变量名；
private:
	static int m_B;
};//(细节要写在；后面)（；前是创建变量）
int Person::m_A = 100;//类外初始化语法： 数据内型 类名：： 变量 = 数值；
int Person::m_B = 100;
void test01()
{
	Person p;
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test02()
{//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//因此静态成员变量有两种访问方式
	//1.通过对象进行访问
	//Person p; cout << p.m_A << endl;
	//2.通过类名进行访问
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;静态成员变量也有访问权限
}
int main()
{
	//test01();
	test02();
}