//��Ԫ
//�ڳ������Щ˽������Ҳ�������������һЩ��������һЩ����з��ʣ�����Ҫ�õ���Ԫ�ļ���
//��Ԫ��Ŀ�ľ�����һ���������������һ������˽�г�Ա
//��Ԫ�Ĺؼ���Ϊfriend
//��Ԫ������ʵ��
//1.ȫ�ֺ�������Ԫ
//2.������Ԫ
//3.��Ա��������Ԫ

//ȫ�ֺ�������Ԫ
#include <iostream>
#include <string>
using namespace std;
class Building
{//goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
	friend void goodGay(Building building);//ֻҪд��������Ϳ���
public:
	
	string m_Settingroom;//����
	Building()
	{
		m_Settingroom = "����";
		m_Bedroom = "����";
	}
private:
	
	string m_Bedroom;//����
};
//ȫ�ֺ���
void goodGay(Building building)
{
	cout << "�û��ѵ�ȫ�ֺ������ڷ���:" << building.m_Settingroom << endl;
	cout << "�û��ѵ�ȫ�ֺ������ڷ���:" << building.m_Bedroom << endl;
}
void test01()
{
	Building building;
	goodGay(building);

}
int main()
{
	test01();
}