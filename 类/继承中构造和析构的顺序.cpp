//继承中构造和析构顺序
//子类继承父类后，当创建子类对象，也会用到父类的构造函数
//问题：父类和子类的构造和析构顺序是谁先谁后

//继承中的构造和析构顺序如下：
//先构造父类，在构造子类，析构的顺序与构造的顺序相反
#include <iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		cout << "Base构造函数" << endl;
	}
	~Base()
	{
		cout << "Base析构函数" << endl;
	}
};
class Son :public Base
{
public:
	Son()
	{
		cout << "Son构造函数" << endl;
	}
	~Son()
	{
		cout << "Son析构函数" << endl;
	}
};
void test01()
{
	//Base b;//父类对象
	Son s;//子类对象
}
int main()
{
	test01();
}