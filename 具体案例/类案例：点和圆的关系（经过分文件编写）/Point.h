#pragma once//(防止头文件重复包含)
#include<iostream>
using namespace std;
//点类
class Point//在一个类设计的时候，我们只需要成员函数的声明(留住函数和变量的声明)
{
public:
	//设置X
	void setm_X(int X);
	
	//获取X
	int getm_X();
	//设置Y
	void setm_Y(int Y);
	
	//获取Y
	int getm_Y();
	
private:
	int m_X = 0; int m_Y = 0;
};