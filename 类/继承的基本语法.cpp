//�̳�
//�̳�������������������֮һ
//�¼���ĳ�Ա����ӵ����һ���Ĺ��ԣ������Լ����ص�����
//���ʱ�����ǿ��Կ������ü̳еļ����������ظ��Ĵ���
//�̳еĻ����﷨
#include<iostream>
using namespace std;
//�̳�ʵ��ҳ��
class BasePage//����ҳ����
{public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
};
//�̳еĺô��������ظ��Ĵ���
//�﷨��class ���ࣺ�̳з�ʽ  ����
//רҵ������� Ҳ��Ϊ ������ ������ Ҳ��Ϊ ����
//Javaҳ��
class Java : public BasePage
{
public : 
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//Pythonҳ��
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "CPPѧ����Ƶ" << endl;
	}
};
void test01()
{
	cout << "Java������Ƶҳ�����£�" << endl;
	Java ja; ja.header(); ja.footer(); ja.left(); ja.content();
	cout << "----------------------------------------------------------------" << endl;
	cout << "Java������Ƶҳ�����£�" << endl;
	Python python; python.header(); python.footer(); python.left(); python.content();
	cout << "----------------------------------------------------------------" << endl;
	cout << "Java������Ƶҳ�����£�" << endl;
	CPP cpp; cpp.header(); cpp.footer(); cpp.left(); cpp.content();

}
int main()
{
	test01();
}