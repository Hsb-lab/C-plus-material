//set��multiset����
//ѧϰĿ�꣺����set��multiset������

//����
//1.set�����Բ����ظ����ݣ���multiset����
//2.set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//3.multiset���������ݣ���˿��Բ����ظ�����

//�ܽ᣺
//1.�������������ظ����ݿ�������set
//2.�����Ҫ�����ظ���������multiset

#include<iostream>
using namespace std;
#include<set>

void test01()
{
	set<int>s;

	pair<set<int>::iterator,bool> ret = s.insert(10);

	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s.insert(10);

	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}

	//��������ظ���ֵ
	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test01();
}