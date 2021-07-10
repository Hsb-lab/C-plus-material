//多态
//多态的基本概念
//多态是c++面向对象的三大特性之一
//多态分为两类
//1.静态多态：函数重载 和 运算符重载 - 编译阶段确定函数地址
//2.动态多态：派生类和虚函数实现运行时多态
//静态多态和动态多态的区别：
//1.静态多态的函数地址早绑定 - 编译阶段确定函数地址
//2.动态多态的函数地址晚绑定 - 运行阶段确定函数地址
#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat:public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
//狗类
class Dog : public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//执行说话的函数
//地址早绑定，在编译阶段就可以确定函数地址
//如果像执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

//动态多态满足条件
//1.有继承关系
//2.子类要重写父类的虚函数
//要区分重写 与 重载
//重写：函数返回值类型 函数名 参数列表 完全一致称为重写


//动态多态的使用
//父类的指针或者引用 指向子类对象

void doSpeak(Animal& animal)  //Animal & animal = cat;
//C++中允许父类与子类之间的类型转换，不需要强制类型转换
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
int main()
{
	test01();
}