//����������ί���
//����������
//��5��ѡ�֣�ѡ��ABDCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����

//ʵ�ֲ��裺
//1.����5��ѡ�֣��ŵ�vector��
//2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10����ί��ִ浽deque������
//3.sort�㷨��deque�����з�������ȥ����߷ֺ���ͷ�
//4.deque��������һ�飬�ۼ��ܷ�
//5.��ȡƽ����

#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<string>
#include<ctime>
#include<algorithm>

//ѡ����
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;//����
	int m_Score;//�÷�
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);

		//��������Person���� ���뵽������
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ�������deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60~100
			d.push_back(score);
		}

		//cout << "ѡ�֣�" << it->m_Name << "�÷֣�" << endl;
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		//����
		sort(d.begin(), d.end());

		//ȥ����߷ֺ���ͷ�
		d.pop_front();
		d.pop_back();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//�ۼ�ÿ����ί�ķ���
		}
		int avg = sum / d.size();

		//��ƽ���� ��ֵ��ѡ������
		//(*it).m_Score = avg;//Ҫע�������ʱҪ��������
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name << " ������" << it->m_Score << endl;
	}
}

void test01()
{
	//1.����5��ѡ��
	vector<Person>v;//���ѡ������
	createPerson(v);

	//����
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "������" << (*it).m_Name << " ������" << (*it).m_Score << endl;
	//}

	//2.��5��ѡ�ִ��

	setScore(v);

	//3.��ʾ���÷�

	showScore(v);
}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
}