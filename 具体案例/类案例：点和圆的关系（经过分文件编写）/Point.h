#pragma once//(��ֹͷ�ļ��ظ�����)
#include<iostream>
using namespace std;
//����
class Point//��һ������Ƶ�ʱ������ֻ��Ҫ��Ա����������(��ס�����ͱ���������)
{
public:
	//����X
	void setm_X(int X);
	
	//��ȡX
	int getm_X();
	//����Y
	void setm_Y(int Y);
	
	//��ȡY
	int getm_Y();
	
private:
	int m_X = 0; int m_Y = 0;
};