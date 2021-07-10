//菱形继承（钻石继承）
//菱形继承概念
//两个派生类继承同一个基类
//又有某个类同时继承两个派生类
//这种继承方式被称为菱形继承，或者钻石继承
//菱形继承问题
//1.羊继承了动物的数据，驼同样也继承了动物的数据，当草泥马使用数据时，就会产生二义性
//2.草泥马继承自动物的数据继承了两份，其实我们应该清楚，这份数据我们只需要一份即可

//vbptr虚基类指针   v-virtual  b-base   ptr-pointer      
//vbtable-虚基类表

#include <iostream>
using namespace std;
//动物类
class Animal
{
public:
	int m_Age;
};
//利用虚继承可以解决菱形继承的问题
//继承之前 加上关键字virtual变为虚继承
//Animal类称为虚基类

//羊类
class Sheep :virtual public Animal
{

};
//驼类
class Tuo :virtual public Animal
{

};
//羊驼类
class SheepTuo :public Sheep, public Tuo
{

};
void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当出现菱形继承，两个父类拥有相同的数据，需要加以作用域加以区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
	//这份数据我们知道只要有一份就可以，菱形继承导致数据又两份，资源浪费
}
int main()
{
	test01();
}
//总结：
//1.菱形继承带来的问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
//2.利用虚继承可以解决菱形继承问题