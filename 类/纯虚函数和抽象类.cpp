//纯虚数和抽象函数
//在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
//因此可以将虚函数改为纯虚函数
//纯虚函数语法 ： virtual 返回值类型 函数名 （参数列表） = 0；
//当类中有了纯虚函数，这个函数也称为抽象类

//抽象类特点
//1.无法实例化对象
//2.子类必须重写抽象类中的纯虚函数，否则它也属于抽象类
#include<iostream>
using namespace std;
class Base
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类特点
	//1.无法实例化对象
	//2.抽象类的子类必须重写父类中的纯虚函数，否则也属于纯虚函数
	virtual void func() = 0;
};
class Son :public Base
{
public:
	virtual void func()
	{
		cout << "func函数调用" << endl;
	}

};

void test01()
{
	//Base b;//抽象类无法实例化对象
	//new Base;//抽象类无法实例化对象
	//Son s;//子类要重写父类中的纯虚函数
	//new Son;//子类要重写父类中的纯虚函数
	Base* base = new Son;//用父类的指针或者引用指向子类对象
	base->func();

}


int main()
{
	test01();
}