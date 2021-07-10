//��ί���
#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
#include<ctime>

class Person
{
public:
	Person(string name,int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;
	int m_Score;
};

//����5��ѡ�ֵ�����
vector<Person> CreatePerson()
{
	vector<Person>temp;

	string PublicName = "ѡ��";
	string NameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		deque<int>deq;
		for (int j = 0; j < 10; j++)
		{
			int score = rand() % 41 + 60;
			deq.push_back(score);
		}

		sort(deq.begin(), deq.end());
		deq.pop_front();
		deq.pop_back();
		int sum = 0;
		for (int k = 0; k < 8; k++)
		{
			sum += deq[k];
		}
		int score = sum / deq.size();

		string name = PublicName + NameSeed[i];
		Person p(name,score);
		temp.push_back(p);
	}
	return temp;
}

//��ӡ�����ĺ���
void PrintVector(vector<Person>v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name << "	�÷֣�" << it->m_Score << endl;
	}
	cout << endl;
}

void test01()
{
	//����5��ѡ��
	vector<Person>v;
	v = CreatePerson();

	//���5��ѡ�ֵ���Ϣ
	PrintVector(v);
}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
}