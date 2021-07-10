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
//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class Person
{public :
  static void func()//静态成员函数也有访问权限
  {
	  m_A = 100;
	  //m_B = 200;//静态成员函数不可以访问非静态成员变量,无法区分到底是哪个对象的m_B属性
	  cout << "static void func的调用" << endl;
 	}
  static int m_A;//静态成员变量
  int m_B;//非静态成员变量
private :
	static void func2()
	{
		cout << "static void func2的调用" << endl;
	}
};
int Person::m_A = 0;
//有两种访问方式
void test01()
{//1.通过对象访问
	Person p;   p.func();//通过对象调用函数时不要忘记加上函数的（）
 //2.通过类名访问
	Person::func();
	//Person::func2;//类外无法访问私有静态成员函数
}

int main()
{
	test01();


	system("pause");
	return 0;
}