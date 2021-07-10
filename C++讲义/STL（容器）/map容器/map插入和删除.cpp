//map�����ɾ��
//����������
//map�������в������ݺ�ɾ������

//����ԭ�ͣ�
//1.insert(elem);//�������в���Ԫ��
//2.clear();//�������Ԫ��
//3.erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//4.erase(beg,end);//ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//5.erase(key);//ɾ��������ֵΪkey��Ԫ��

//�ܽ᣺
//map���뷽ʽ�ܶ࣬��ס��һ����
//1.���롪��insert
//2.ɾ������erase
//3.��ա���clear

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
	map<int, int>m;

	//����
	//��һ��
	m.insert(pair<int, int>(1, 10));

	//�ڶ���
	m.insert(make_pair(2, 20));

	//������
	m.insert(map<int, int>::value_type(3, 30));

	//������(������[])
	m[4] = 40;

	//[]��������룬��;����������key����value
	//cout << m[5] << endl;
	PrintMap(m);

	//ɾ��
	m.erase(m.begin());
	PrintMap(m);

	//���صİ汾��������keyֵ������keyɾ��
	m.erase(3);
	PrintMap(m);

	//m.erase(m.begin(), m.end());
	m.clear();
	PrintMap(m);
}

int main()
{
	test01();
}