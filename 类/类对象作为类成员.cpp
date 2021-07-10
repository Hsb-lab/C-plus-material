//类对象作为类成员
//c++类中的成员可以是另一个类的对象，我们称该成员 为 对象成员
//那么出现这种情况时，析构和构造的顺序如何呢？
#include <iostream>
#include <string>
using namespace std;
//类作为类对象
class Phone
{public :
	Phone(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
	//手机品牌名称
	string m_PName;
};

class Person
{public :
	//Phone m_Phone = PName;隐式转换法
	Person(string name, string pName):m_Name(name) , m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;//小类的对象先调用
};
//当其他类对象作为本类成员，构造函数时候先构造类对象，在构造自身，析构的顺序相反
//先进后出，迟到早退
void test01()
{
	Person p("张三","苹果MAX");
	cout << p.m_Name << "拿着: " << p.m_Phone.m_PName << endl;
}

int main()
{

	test01();
	system("pause");
	return 0;
}