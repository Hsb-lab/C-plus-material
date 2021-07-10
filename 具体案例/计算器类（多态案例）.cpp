//多态案例
//案例描述：
//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类

//多态的优点
//1.代码组织结构清晰
//2.可读性强
//3.利于前期和后期的扩展以及维护
#include <iostream>
#include <string>
using namespace std;
//分别利用普通写法 和 多态技术实现计算器
//普通写法
class Caculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")  return m_1 + m_2;
		if (oper == "-")  return m_1 - m_2;
		if (oper == "*")  return m_1 * m_2;
		//如果想扩展新功能，需要修改源码
		//在真实的开发中 提倡 开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭
	}

	int m_1;//操作数1
	int m_2;//操作数2
};
void test01()
{
	//创建计算器对象
	Caculator c;
	c.m_1 = 10; c.m_2 = 10;
	cout << c.m_1 << " + " << c.m_2 << " = " << c.getResult("+") << endl;
	cout << c.m_1 << " - " << c.m_2 << " = " << c.getResult("-") << endl;
	cout << c.m_1 << " * " << c.m_2 << " = " << c.getResult("*") << endl;
}
//利用多态实现计算器
//多态好处：
//1.组织结构清晰
//2.可读性强
//3.对于前期和后期扩展以及维护性高

//实现计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};
//加法计算器类
class AddCaculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 + m_num2;
	}
};
//减法计算器类
class SubCaculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 - m_num2;
	}
};
//乘法计算器类
class MulCaculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 * m_num2;
	}
};
void test02()
{
	//多态使用条件：父类指针或者引用指向子类对象

	//加法运算
	AbstractCalculator* abc = new AddCaculator;
	abc->m_num1 = 100; abc->m_num2 = 100;
	cout << abc->m_num1 << " + " << abc->m_num2 <<" = "<<abc->getResult()<< endl;
	//用完后记得销毁
	delete abc;
	//销毁的是堆区的数据，指针的类型没有变，指针也继续存在（空指针）

	//减法运算
	abc = new SubCaculator;
	abc->m_num1 = 100; abc->m_num2 = 100;
	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
	delete abc;

	//乘法运算
	abc = new MulCaculator;
	abc->m_num1 = 100; abc->m_num2 = 100;
	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
	delete abc;
}
int main()
{
	//test01();
	test02();
}