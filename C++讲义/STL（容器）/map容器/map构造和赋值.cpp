//map/multimap�����������ܡ���Ч�ʣ�˵�ľ������������
//map������������
//��飺
//1.map������Ԫ�ض���pair
//2.pair�е�һ��Ԫ��Ϊkey����ֵ�������������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
//3.����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����

//���ʣ�
//map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��

//�ŵ㣺
//���Ը���keyֵ�����ҵ�valueֵ

//map��multimap����
//1.map���������������ظ�keyֵԪ��
//2.multimap�������������ظ�keyֵԪ��

//map����͸�ֵ
//������������map�������й���͸�ֵ����

//����ԭ�ͣ�
//map<T1,T2>mp;//mapĬ�Ϲ��캯��
//map(const map & mp);//�������캯��

//��ֵ��
//map &operator=(const map &mp);//���صȺŲ�����

//�ܽ᣺
//map����������Ԫ�ض��ǳɶԳ��֣���������ʱҪʹ�ö���

#include<iostream>
using namespace std;
#include<map>

void PrintMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	//����map����
	map<int, int>m;

	//
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(3, 30));

	PrintMap(m);

	//��������
	map<int,int>m2(m);
	PrintMap(m2);

	//��ֵ
	map<int, int>m3;
	m3 = m2;
	PrintMap(m3);
}

int main()
{
	test01();
}