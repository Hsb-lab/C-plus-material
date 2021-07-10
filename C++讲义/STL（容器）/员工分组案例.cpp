//��������Ա������
//����������
//1.��˾������Ƹ��10��Ա��(ABCDEFGHIJ)��10��Ա�����빫˾֮����Ҫָ��Ա�����ĸ����Ź���
//2.Ա����Ϣ�У�������������ɣ����ŷ�Ϊ���߻����������з�
//3.�����10��Ա�����䲿�ź͹���
//4.ͨ��multimap������Ϣ�Ĳ��� key�����ű�ţ� value��Ա����
//5.�ֲ�����ʾԱ����Ϣ

//ʵ�ֲ��裺
//1.����10��Ա�����ŵ�vector������
//2.����vector������ȡ��ÿ��Ա���������������
//3.����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
//4.�ֲ�����ʾԱ����Ϣ

#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<ctime>

#define CHEHUA 0
#define MEISHU 1
#define YANFA 2


class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void CreateWorker(vector<Worker>& v)
{
	for (int i = 0; i < 10; i++)
	{
		string NameSeed = "ABCDEFGHIJ";
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += NameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000;

		//��Ա�����뵽������
		v.push_back(worker);
	}
}

//Ա������
void SetGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int depID = rand() % 3;

		//��Ա�����뵽������
		//key���ű��  value����Ա��
		m.insert(make_pair(depID, *it));
	}
}

void ShowWorkerGroup(multimap<int, Worker>& m)
{
	cout << "�߻�����" << endl;
	multimap<int,Worker>::iterator pos = m.find(CHEHUA);
	int count = m.count(CHEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++,index++)
	{
		cout << "������" << (pos->second).m_Name << " ���ʣ�" << (pos->second).m_Salary << endl;
	}

	cout << "---------------------------------" << endl;

	cout << "��������" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << (pos->second).m_Name << " ���ʣ�" << (pos->second).m_Salary << endl;
	}

	cout << "---------------------------------" << endl;

	cout << "�з�����" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << (pos->second).m_Name << " ���ʣ�" << (pos->second).m_Salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//1.����Ա��
	vector<Worker>vWorker;
	CreateWorker(vWorker);

	//����
	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	//{
	//	cout << "������" << it->m_Name << " ���ʣ�" << it->m_Salary << endl;
	//}
	//cout << endl;

	//2.Ա������
	multimap<int, Worker>mWorker;
	SetGroup(vWorker, mWorker);

	//3.������ʾԱ��
	ShowWorkerGroup(mWorker);
}