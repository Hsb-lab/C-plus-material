//��ϰ����:�����������
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
#include <iostream>
using namespace std;
//1.������������
//2.�������
//3.�����Ϊ ��ȡ���������������
//4.�ֱ�ʹ��ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
//����ȫ�ֺ����ж������������Ƿ����
class Cube {

public:
	//���ó�
	void setL(int l)
	{
	 m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ø�
	void setH(int h)
	{
		m_H = h;
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}
	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//��ȡ���������
	int caculateS()
	{
		return 2 * m_L * m_H + 2 * m_L * m_W + 2 * m_H * m_W;
	}
	//��ȡ���������
	int caculateV()
	{
		return m_L * m_H * m_W;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube & c)
	{
		if (m_L == c.getL() &&  m_H == c.getH() && m_W == c.getW()) return true;
		else return false;
	}
private :
	int m_L = 0;//��
	int m_W = 0;//��
	int m_H = 0;//��
};

//����ȫ�ֺ����ж� �����������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW()) return true;
	else return false;

}
int main()
{
	Cube c1;
	c1.setL(10); 
	c1.setW(10); 
	c1.setH(10);
	cout << "c1�����Ϊ" << c1.caculateS() << endl;
	cout << "c1�����Ϊ" << c1.caculateV() << endl;
	Cube c2;//�����ڶ���������
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);
	bool ret = isSame(c1, c2);
	if (ret)     cout << "c1��c2����ȵ�" << endl;
	else         cout<< "c1��c2�ǲ���ȵ�" << endl;
	ret = c1.isSameByClass(c2);
	if (ret)     cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
	else         cout << "��Ա�����жϣ�c1��c2�ǲ���ȵ�" << endl;
	
}