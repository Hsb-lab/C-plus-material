//map���Һ�ͳ��
//����������
//��map�������в��������Լ�ͳ������

//����ԭ�ͣ�
//1.find(key);//����key�Ƿ���ڣ������ڣ����ظĽ���Ԫ�صĵ��������������ڣ�����map.end();
//2.count(key);//ͳ��key��Ԫ�ظ���

//�ܽ᣺
//1.���ҡ���find�����ص��ǵ�������
//2.ͳ�ơ���count������map���ԣ����Ϊ0��1��

#include<iostream>
using namespace std;
#include<map>

void test01()
{
	//����
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));

	map<int,int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "���ҵ�Ԫ��" << endl;
		cout << "key = " << (*pos).first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "δ���ҵ�Ԫ��" << endl;
	}

	//ͳ�ƣ����Ϊ0��1��
	//map����������ظ���keyֵ
	int num = m.count(3);
	cout << "num = " << num << endl;
}

int main()
{
	test01();
}