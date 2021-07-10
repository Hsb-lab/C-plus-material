//拷贝构造函数的调用时机
//c++中拷贝构造函数调用时机通常有三种情况
#include <iostream>
using namespace std;
class Person
{public :
	Person()
	{
		cout << "Person默认构造函数调用" << endl;
	}

	Person(int Age)
	{
		m_Age = Age;
		cout << "Person有参构造函数调用" << endl;
	}

	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
	int m_Age = 0;
};
//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << endl;
}

//2.值传递的方式给函数参数传值
void dowork(Person p)
{

}

void test02()
{
	Person p;
	dowork(p);//值传递的本质会拷贝一个临时的副本
}
//3.以值方式返回局部对象（不要返回局部变量的指针或引用）
Person dowork2()
{
	Person  p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person p = dowork2();
	cout << (int*)&p << endl;
}
int main()
{
	//test01();
	//test02();
	test03();
}
//构造函数的调用规则
//默认情况下，c++编译器至少给一个类添加三个函数
//1.默认构造函数（无参，函数体为空）
//2.默认构造函数（无参，函数体为空）
//3.默认拷贝函数，对属性进行值拷贝

//构造函数调用规则如下：
//1.如果用户定义有参构造函数，c++不会在提供默认构造，但是会提供默认构造函数
//2.如果用户定义拷贝构造函数，c++不会提供其他构造函数