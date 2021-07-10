//类对象作为类成员
//c++类中的成员可以是另一个类的对象，我们称改成员为对象成员
//当其他类对象作为本类成员，构造时候先构造类对象，在构造自身
//析构的顺序与构造相反


//初始化列表
//作用：c++提供了初始化列表语法，用来初始化属性
#include <iostream>
using namespace std;
class Person
{public :
	//传统初始化操作
	//Person(int a, int b, int c)
	//{
	//	m_A = a; m_B = b; m_C = c;
	//}

	

	//初始化列表初始化属性
	Person(int A,int B,int C) :m_A(A), m_B(B), m_C(C)
	{

	}

	int m_A = 0, m_B = 0, m_C = 0;
};

void test01()
{
	//Person p(10, 20, 30);
	Person p(30,20,10);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

int main()
{
	test01();

}
