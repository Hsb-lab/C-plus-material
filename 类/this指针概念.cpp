//this指针概念
//this指针指向被调用的成员函数所属的对象

//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可

//this指针的用途：
//1.当形参和成员函数同名时，可用this指针来区分
//2.在类的非静态成员函数中返回对象本身，可使用return *this
#include <iostream>
using namespace std;
class Person
{public :
	Person(int age)
	{//this指向被调用的成员函数所属的成员对象
		this->age = age;
	}
   Person  PersonAddAge(Person & p)//用引用的方式返回
	{
	   this->age += p.age;
	   //this是指p2的指针，而*this指向的就是p2这个对象
	   return *this;
	}
	int age ;
};
//1.解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}

//2.返回对象本身
void test02()
{
	Person p1(10);

	Person p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}
int main()
{
	//test01();
	test02();
}