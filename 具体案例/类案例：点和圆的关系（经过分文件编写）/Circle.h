#pragma once//(���д���������Ƿ�ֹͷ�ļ��ظ�����)
#include <iostream>
#include "Point.h"
using namespace std;
class Circle
{
public:
	//���ð뾶
	void  setm_R(int R);
	
	//��ȡ�뾶
	int getm_R();
	
	//����Բ��
	void setCenter(Point Center);
	
	//��ȡԲ��
	Point getCenter();
	
private:
	int m_R = 0;//�뾶
	Point m_Center;//Բ��(һ�������������һ����)�������п�������һ������Ϊ����ĳ�Ա��
};
