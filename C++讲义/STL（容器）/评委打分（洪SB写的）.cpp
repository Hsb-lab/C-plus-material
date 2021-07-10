//案例——评委打分
//案例描述：
//有五名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分和最低分，取平均分

//实现步骤：
//1.创建5名选手，放到vector容器中
//2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评委的打分存到deque容器中
//3.sort算法对deque容器中分数排序，去除最低分和最高分
//4.deque容器遍历一遍，累加总分
//5.获取平均分

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

void CreatePerson(vector<Person>&v)//注意要以引用的方式传进来（懂得都懂）
{
	//遍历容器，赋值
	string NameSeed = "ABCDE";
	
	for (int i = 0; i < 5; i++)
	{
		string str = "选手";
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
		cout << "选手的姓名为：" << (*it).m_Name << " 得分为：" << it->m_Score << endl;
	}
}

void test01()
{
	//创建存放五名选手的vector容器
	vector<Person>v;

	//创建五名选手的信息
	CreatePerson(v);

	//输出五名选手的信息
	ShowPerson(v);
}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
}