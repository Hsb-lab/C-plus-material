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
//������Ԫ
class Building;

class GoodGay
{public:
	GoodGay();
	void visit();//�ιۺ��� ����Building�е�����
	Building * building;

};

class Building
{
public:
	friend class GoodGay;
	Building();

	string m_SettingRoom;//����
private:
	string m_BedRoom;//����

};

Building::Building()//Building�Ĺ��캯��
{
	m_SettingRoom = "����";
	m_BedRoom = "����";
}

GoodGay ::GoodGay()//GoodGay�Ĺ��캯��
{//�������������
	building = new Building;
}

void GoodGay:: visit() {
	cout << "�û������ڷ��ʣ�" << building->m_SettingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test01();
}