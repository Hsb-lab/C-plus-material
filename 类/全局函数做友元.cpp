//友元
//在程序里，有些私有属性也想让类外特殊的一些函数或者一些类进行访问，就需要用到友元的技术
//友元的目的就是让一个函数或者类访问一个类中私有成员
//友元的关键字为friend
//友元的三种实现
//1.全局函数做友元
//2.类做友元
//3.成员函数做友元

//全局函数做友元
#include <iostream>
#include <string>
using namespace std;
class Building
{//goodGay全局函数是Building的好朋友，可以访问Building中的私有成员
	friend void goodGay(Building building);//只要写到类里面就可以
public:
	
	string m_Settingroom;//客厅
	Building()
	{
		m_Settingroom = "客厅";
		m_Bedroom = "卧室";
	}
private:
	
	string m_Bedroom;//卧室
};
//全局函数
void goodGay(Building building)
{
	cout << "好基友的全局函数正在访问:" << building.m_Settingroom << endl;
	cout << "好基友的全局函数正在访问:" << building.m_Bedroom << endl;
}
void test01()
{
	Building building;
	goodGay(building);

}
int main()
{
	test01();
}