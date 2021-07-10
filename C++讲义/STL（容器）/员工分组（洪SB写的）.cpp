//案例——员工分组
//案例描述：
//1.公司今天招聘了10个员工(ABCDEFGHIJ)，10名员工进入公司之后，需要指派员工在哪个部门工作
//2.员工信息有：姓名、工资组成；部门分为：策划、美术、研发
//3.随机给10名员工分配部门和工资
//4.通过multimap进行信息的插入 key（部门编号） value（员工）
//5.分部门显示员工信息
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
		this->m_Name = "二百五";
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

//实现传入数据的函数
void CreateWorker(multimap<int, Worker>& m)//要以引用的方式传入（懂得都懂）
{
	string NameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		string name = "员工";
		name += NameSeed[i];
		int salary = rand() % 10001 + 10000;
		int Id = rand() % 3;//0 1 2
		m.emplace(Id,Worker(name,salary));//创建的是Worker的匿名对象
	}
}

//打印员工信息的函数
void ShowWorker(multimap<int, Worker> & m)
{
	cout << "研发部" << endl;
	multimap<int, Worker>::iterator pos = m.find(Creation);
	int num = m.count(Creation);
	for (int i = 0; i < num; i++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
		pos++;
	}
	cout << endl;

	cout << "---------------------------" << endl;

	cout << "美术" << endl;
	pos = m.find(Art);
	num = m.count(Art);
	for (int i = 0; i < num; i++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
		pos++;
	}
	cout << endl;

	cout << "---------------------------" << endl;

	cout << "决策部" << endl;
	pos = m.find(Decision);
	num = m.count(Decision);
	for (int i = 0; i < num; i++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
		pos++;
	}
	cout << endl;
}

void test01()
{
	//默认构造创建一个储存员工的map容器
	multimap<int,Worker>m;

	//给map容器传入数据
	CreateWorker(m);

	//测试代码01
	//for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
	//{
	//	cout << "姓名：" << it->second.m_Name << " 工资：" << it->second.m_Salary << endl;
	//}
	//cout << endl;

	//测试代码02
	//cout << Creation << endl;
	//cout << Art << endl;
	//cout << Decision << endl;

	//分组显示员工信息 
	ShowWorker(m);

}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
}