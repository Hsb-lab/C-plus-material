//����������ί���
//����������
//������ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷ֺ���ͷ֣�ȡƽ����

//ʵ�ֲ��裺
//1.����5��ѡ�֣��ŵ�vector������
//2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10����ί�Ĵ�ִ浽deque������
//3.sort�㷨��deque�����з�������ȥ����ͷֺ���߷�
//4.deque��������һ�飬�ۼ��ܷ�
//5.��ȡƽ����

#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<ctime>
#include<algorithm>

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;
	int m_Score;
};

void CreatePerson(vector<Person>&v)//ע��Ҫ�����õķ�ʽ�����������ö�����
{
	//������������ֵ
	string NameSeed = "ABCDE";
	
	for (int i = 0; i < 5; i++)
	{
		string str = "ѡ��";
		deque<int>deq;
		for (int j = 0; j < 10; j++)
		{
			int score = rand() % 41 + 60;
			deq.push_back(score);
		}
		sort(deq.begin(),deq.end());
		deq.pop_back();
		deq.pop_front();
		int sum = 0;
		for (int k = 0; k < 8; k++)
		{
			sum += deq[i];
		}
		int m_Score = sum / deq.size();
		Person P ( str+NameSeed[i] , m_Score);
		v.push_back(P);
	}
}

void ShowPerson(const vector<Person>& v)
{
	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�ֵ�����Ϊ��" << (*it).m_Name << " �÷�Ϊ��" << it->m_Score << endl;
	}
}

void test01()
{
	//�����������ѡ�ֵ�vector����
	vector<Person>v;

	//��������ѡ�ֵ���Ϣ
	CreatePerson(v);

	//�������ѡ�ֵ���Ϣ
	ShowPerson(v);
}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
}