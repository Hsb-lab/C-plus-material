//������ϰ:���Բ�Ĺ�ϵ
//�������������һ��Բ�࣬��һ�����࣬������Բ�Ĺ�ϵ
//��ʾ�����õ㵽Բ�ĵľ����ж�
#include <iostream>
using namespace std;
//���Բ��ϵ����
//����
class Point
{public :
	//����X
	void setm_X(int X)
	{
		m_X = X;
}
	//��ȡX
	int getm_X()
	{
		return m_X;
	}
	//����Y
	void setm_Y(int Y)
	{
		m_Y = Y;
	}
	//��ȡY
	int getm_Y()
	{
		return m_Y;
	}
private:
	int m_X = 0; int m_Y = 0;
};
//Բ��
class Circle
{public :
	//���ð뾶
	void setm_R(int R)
	{
		m_R = R;
	}
	//��ȡ�뾶
	int getm_R()
	{
		return m_R;
	}
	//����Բ��
	void setCenter(Point Center)
	{
		m_Center = Center;
	}
	//��ȡԲ��
	Point getCenter()
	{
		return m_Center;
	}
private :
	int m_R = 0;//�뾶
	Point m_Center;//Բ��(һ�������������һ����)
};
//�жϵ��Բ�Ĺ�ϵ
void isIncircle(Circle& c, Point& p)
{//��������֮��ľ����ƽ��
int distance  =	(c.getCenter().getm_X() - p.getm_X())* (c.getCenter().getm_X() - p.getm_X()) +
		(c.getCenter().getm_Y() - p.getm_Y()) * (c.getCenter().getm_Y() - p.getm_Y());
//����뾶��ƽ��
int rDistance = c.getm_R() * c.getm_R();
//�жϹ�ϵ
if (distance == rDistance)  cout << "����Բ��" << endl;
else if (distance > rDistance) cout << "����Բ��" << endl;
else cout << "����Բ��" << endl;
}
int main()
{//ǰ��Ҫ�Լ��ȶ���һ������ϵ�����Ƽ�Բ��λ��ԭ�㣩
	//ʵ���� ����Բ
	Circle c; c.setm_R(10); Point Center; Center.setm_X(0); Center.setm_Y(0);
//ʵ���� ������
	Point p; p.setm_X(10); p.setm_Y(0);
	isIncircle(c, p);

}