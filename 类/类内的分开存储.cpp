//                                                      C++对象模型和this指针
//成员变量和成员函数分开存储：
//在c++中，类内的成员变量和成员函数分开存储
//只有非静态成员变量才是属于类的对象上
#include <iostream>
using namespace std;
class Person
{ public:
	int m_A ;//非静态成员变量属于内的对象上的
	static int m_B;//静态成员变量不属于内的对象上
	void func1() {}//非静态成员函数
	static void func2() {}//静态成员函数
};
int Person::m_B = 0;
void test01()
{  //空对象占用内存空间为 ：1
	//解释：c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	Person p; cout << sizeof(p) << endl;
	
}

//总结：只有非静态成员变量属于类的对象上

void test02()
{
	Person p; cout << sizeof(p) << endl;
	
}

int main()
{
	//test01();
	test02();
}