//案例练习:点和圆的关系
//案例描述：设计一个圆类，和一个点类，计算点和圆的关系
//提示：利用点到圆心的距离判断
#include <iostream>
using namespace std;
//点和圆关系案例
//点类
class Point
{public :
	//设置X
	void setm_X(int X)
	{
		m_X = X;
}
	//获取X
	int getm_X()
	{
		return m_X;
	}
	//设置Y
	void setm_Y(int Y)
	{
		m_Y = Y;
	}
	//获取Y
	int getm_Y()
	{
		return m_Y;
	}
private:
	int m_X = 0; int m_Y = 0;
};
//圆类
class Circle
{public :
	//设置半径
	void setm_R(int R)
	{
		m_R = R;
	}
	//获取半径
	int getm_R()
	{
		return m_R;
	}
	//设置圆心
	void setCenter(Point Center)
	{
		m_Center = Center;
	}
	//获取圆心
	Point getCenter()
	{
		return m_Center;
	}
private :
	int m_R = 0;//半径
	Point m_Center;//圆心(一个类里面包含另一个类)
};
//判断点和圆的关系
void isIncircle(Circle& c, Point& p)
{//计算两点之间的距离的平方
int distance  =	(c.getCenter().getm_X() - p.getm_X())* (c.getCenter().getm_X() - p.getm_X()) +
		(c.getCenter().getm_Y() - p.getm_Y()) * (c.getCenter().getm_Y() - p.getm_Y());
//计算半径的平方
int rDistance = c.getm_R() * c.getm_R();
//判断关系
if (distance == rDistance)  cout << "点在圆上" << endl;
else if (distance > rDistance) cout << "点在圆外" << endl;
else cout << "点在圆内" << endl;
}
int main()
{//前提要自己先定义一个坐标系（我推荐圆心位于原点）
	//实例化 创建圆
	Circle c; c.setm_R(10); Point Center; Center.setm_X(0); Center.setm_Y(0);
//实例化 创建点
	Point p; p.setm_X(10); p.setm_Y(0);
	isIncircle(c, p);

}