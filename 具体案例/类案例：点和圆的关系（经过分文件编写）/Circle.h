#pragma once//(这行代码的作用是防止头文件重复包含)
#include <iostream>
#include "Point.h"
using namespace std;
class Circle
{
public:
	//设置半径
	void  setm_R(int R);
	
	//获取半径
	int getm_R();
	
	//设置圆心
	void setCenter(Point Center);
	
	//获取圆心
	Point getCenter();
	
private:
	int m_R = 0;//半径
	Point m_Center;//圆心(一个类里面包含另一个类)（在类中可以让另一个类作为本类的成员）
};
