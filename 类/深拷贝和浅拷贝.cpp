//深拷贝和浅拷贝
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作

//总结：
//如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，以解决浅拷贝带来的问题

#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age,int height)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = age;
		m_Height = new int (height);
	}
	Person(const Person& p)
	{
		this->m_Age = p.m_Age;
		//在堆区重新创建一块内存，解决内存重复释放的问题
		//this->m_Height = p.m_Height;编译器默认实现就是这行代码
		this->m_Height =new int (*p.m_Height);
	}


	~Person()
	{
		cout << "Person的析构函数调用" << endl;
		//将堆区开辟的数据释放
		//知识补充：栈区数据由编译器自动释放，存放函数的参数值，局部变量等
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;//防止出现野指针
		}
	}
	int m_Age;//年龄
	int* m_Height;//身高
};

void test01()
{
	Person p1(18,160);
	cout << "p1的年龄：" << p1.m_Age << endl;
	cout << "p1的身高：" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p2的年龄：" << p2.m_Age << endl;
	cout << "p2的身高：" << *p2.m_Height << endl;
}

int main()
{
	test01();
}