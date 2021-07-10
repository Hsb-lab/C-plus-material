//��������Ա������
//����������
//1.��˾������Ƹ��10��Ա��(ABCDEFGHIJ)��10��Ա�����빫˾֮����Ҫָ��Ա�����ĸ����Ź���
//2.Ա����Ϣ�У�������������ɣ����ŷ�Ϊ���߻����������з�
//3.�����10��Ա�����䲿�ź͹���
//4.ͨ��multimap������Ϣ�Ĳ��� key�����ű�ţ� value��Ա����
//5.�ֲ�����ʾԱ����Ϣ
#include<iostream>
using namespace std;
#include<map>
#include<ctime>

enum {Creation,Art,Decision};

class Worker
{
public:
	Worker()
	{
		this->m_Name = "������";
		this->m_Salary = 0;
	}

	Worker(string name, int salary)
	{
		this->m_Name = name;
		this->m_Salary = salary;
	}

	string m_Name;
	int m_Salary;
};

//ʵ�ִ������ݵĺ���
void CreateWorker(multimap<int, Worker>& m)//Ҫ�����õķ�ʽ���루���ö�����
{
	string NameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		string name = "Ա��";
		name += NameSeed[i];
		int salary = rand() % 10001 + 10000;
		int Id = rand() % 3;//0 1 2
		m.emplace(Id,Worker(name,salary));//��������Worker����������
	}
}

//��ӡԱ����Ϣ�ĺ���
void ShowWorker(multimap<int, Worker> & m)
{
	cout << "�з���" << endl;
	multimap<int, Worker>::iterator pos = m.find(Creation);
	int num = m.count(Creation);
	for (int i = 0; i < num; i++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
		pos++;
	}
	cout << endl;

	cout << "---------------------------" << endl;

	cout << "����" << endl;
	pos = m.find(Art);
	num = m.count(Art);
	for (int i = 0; i < num; i++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
		pos++;
	}
	cout << endl;

	cout << "---------------------------" << endl;

	cout << "���߲�" << endl;
	pos = m.find(Decision);
	num = m.count(Decision);
	for (int i = 0; i < num; i++)
	{
		cout << "������" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
		pos++;
	}
	cout << endl;
}

void test01()
{
	//Ĭ�Ϲ��촴��һ������Ա����map����
	multimap<int,Worker>m;

	//��map������������
	CreateWorker(m);

	//���Դ���01
	//for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
	//{
	//	cout << "������" << it->second.m_Name << " ���ʣ�" << it->second.m_Salary << endl;
	//}
	//cout << endl;

	//���Դ���02
	//cout << Creation << endl;
	//cout << Art << endl;
	//cout << Decision << endl;

	//������ʾԱ����Ϣ 
	ShowWorker(m);

}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
}