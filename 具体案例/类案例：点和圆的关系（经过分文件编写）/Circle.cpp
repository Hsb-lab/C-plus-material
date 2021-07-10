#include"Circle.h"
//设置半径
void Circle::setm_R(int R)
{
	m_R = R;
}
//获取半径
int Circle::getm_R()
{
	return m_R;
}
//设置圆心
void Circle::setCenter(Point Center)
{
	m_Center = Center;
}
//获取圆心
Point Circle::getCenter()
{
	return m_Center;
}