//知识补充：构造函数不可以作为虚函数
//虚析构和纯虚析构
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式：将父类中的析构函数改为虚析构或者纯虚析构

//虚析构和纯虚析构共性：
//1.可以解决父类指针释放子类对象的问题
//2.都需要有具体的函数实现

//虚析构和纯虚析构的区别：
//如果是纯虚析构，该类属于抽象类，无法实例化对象

//虚析构语法：
//virtual ~类名（）{}
//virtual ~类名（）{} = 0；
//类名：：~类名（）{}

//对于虚函数，调用结果不会走父类中的虚函数；而是走子类中重写的虚函数；
//而对于虚析构函数，走完子类的析构函数函数后还会走父类的析构函数
//为什么这么设定的原因：父类中可能也有属性开辟在堆区，要走析构函数释放干净
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	virtual void speak() = 0;//纯虚函数
	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
	//virtual ~Animal()
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}
	
	//纯虚析构 需要声明也需要实现
	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal() = 0;//只有函数声明，没有函数的具体实现
};

Animal::~Animal()
{
	cout << "Animal纯虚析构函数的具体实现" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}

	void speak()
	{
		cout<<*m_Name << "小猫在说话" << endl;
	}
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	string *m_Name;
};

void test01()
{
	Animal* animal = new Cat ("Tom");
	animal->speak();
	//父类指针在析构的时候，不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
	//(以上情况只适用于创建匿名对象)（如果正常创建对象的话，还是会走子类的析构函数的）
	delete animal;
	//Cat a("tom");
}

int main()
{
	test01();
}
//总结：
//1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象的问题
//2.如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//3.拥有纯虚析构函数的类也属于抽象类