//�̳��еĶ���ģ��
//���⣺�Ӹ���̳й����ĳ�Ա����Щ�����������
#include <iostream>
using namespace std;
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base
{
public:
	int m_D;

};
//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷� D��
//��ת�ļ�·�� cd ����·����
//�鿴����
//cl / d1 reportSingleClassLayout���� �ļ���

void test01()
{//�����з����зǾ�̬��Ա���Զ��ᱻ����̳�
	//������˽�г�Ա���� �Ǳ��������������ˣ�����Ƿ��ʲ�������ȴ�Ǳ��̳���ȥ��
	cout << "size of Son = " << sizeof(Son) << endl;
}
int main()
{
	test01();
}