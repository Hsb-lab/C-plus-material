//map��С�ͽ���
//����������
//ͳ��map������С�Լ�����map����

//����ԭ�ͣ�
//size();//����������Ԫ�ص���Ŀ
//empty();//�ж������Ƿ�Ϊ��
//swap(st);//����������������

//�ܽ᣺
//ͳ�ƴ�С����size
//�ж��Ƿ�Ϊ�ա���empty
//������������swap

#include<iostream>
using namespace std;
#include<map>

//��С
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	if (m.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "������Ԫ�صĸ���Ϊ��" << m.size() << endl;
	}
}

void PrintMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

//����
void test02()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "����ǰ" << endl;
	PrintMap(m);
	PrintMap(m2);

	cout << "-------------------" << endl;

	cout << "������" << endl;
	m.swap(m2);
	PrintMap(m);
	PrintMap(m2);
}

int main()
{
	//test01();
	test02();
}