//友元
//在程序里，有些私有属性也想让类外特殊的一些函数或者一些类进行访问，就需要用到友元的技术
//友元的目的就是让一个函数或者类访问一个类中私有成员
//友元的关键字为friend
//友元的三种实现
//1.全局函数做友元
//2.类做友元
//3.成员函数做友元
#include <iostream>
#include <string>
using namespace std;
class Building;
class GoodGay
{public :
	GoodGay();
	Building* building;
	void visit();//让visit函数可以访问Building中的私有成员
	void visit2();//让visit2函数不可以访问Building中的私有成员
};

class Building
{
public:
	friend void GoodGay::visit();
	Building();
	string m_SettingRoom;//客厅
private:
	string m_BedRoom;//卧室
};
//类外实现成员函数
Building :: Building()
{
	 m_SettingRoom = "客厅";
	 m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit()//让visit函数可以访问Building中的私有成员
{
	cout << "visit函数正在访问：" << building->m_SettingRoom << endl;
	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}
void GoodGay::visit2()//让visit2函数不可以访问Building中的私有成员
{
	cout << "visit2函数正在访问：" << building->m_SettingRoom << endl;
	//cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}
void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
}