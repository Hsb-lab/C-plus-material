//��Ԫ
//�ڳ������Щ˽������Ҳ�������������һЩ��������һЩ����з��ʣ�����Ҫ�õ���Ԫ�ļ���
//��Ԫ��Ŀ�ľ�����һ���������������һ������˽�г�Ա
//��Ԫ�Ĺؼ���Ϊfriend
//��Ԫ������ʵ��
//1.ȫ�ֺ�������Ԫ
//2.������Ԫ
//3.��Ա��������Ԫ
#include <iostream>
#include <string>
using namespace std;
class Building;
class GoodGay
{public :
	GoodGay();
	Building* building;
	void visit();//��visit�������Է���Building�е�˽�г�Ա
	void visit2();//��visit2���������Է���Building�е�˽�г�Ա
};

class Building
{
public:
	friend void GoodGay::visit();
	Building();
	string m_SettingRoom;//����
private:
	string m_BedRoom;//����
};
//����ʵ�ֳ�Ա����
Building :: Building()
{
	 m_SettingRoom = "����";
	 m_BedRoom = "����";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit()//��visit�������Է���Building�е�˽�г�Ա
{
	cout << "visit�������ڷ��ʣ�" << building->m_SettingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay::visit2()//��visit2���������Է���Building�е�˽�г�Ա
{
	cout << "visit2�������ڷ��ʣ�" << building->m_SettingRoom << endl;
	//cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}
int main()
{
	test01();
}