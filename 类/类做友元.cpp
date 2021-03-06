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
//类做友元
class Building;

class GoodGay
{public:
	GoodGay();
	void visit();//参观函数 访问Building中的属性
	Building * building;

};

class Building
{
public:
	friend class GoodGay;
	Building();

	string m_SettingRoom;//客厅
private:
	string m_BedRoom;//卧室

};

Building::Building()//Building的构造函数
{
	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay ::GoodGay()//GoodGay的构造函数
{//创建建筑物对象
	building = new Building;
}

void GoodGay:: visit() {
	cout << "好基友正在访问：" << building->m_SettingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test01();
}