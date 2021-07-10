//set��С�ͽ���
//����������ͳ��set������С�Լ�����set����

//����ԭ�ͣ�
//1.size();//����������Ԫ�ص���Ŀ
//2.empty();//�ж������Ƿ�Ϊ��
//3.swap(st);//����������������

//�ܽ᣺
//ͳ�ƴ�С����size
//�ж��Ƿ�Ϊ�ա���empty
//������������swap

#include<iostream>
using namespace std;
#include<set>

void PrintSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��С
void test01()
{
	set<int>s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//��ӡ����
	PrintSet(s1);

	//�ж��Ƿ�Ϊ��
	if (s1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "������Ԫ�ظ���Ϊ��" << s1.size() << endl;
	}
}

//����
void test02()
{
	set<int>s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>s2;

	//��������
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "����ǰ" << endl;
	PrintSet(s1);
	PrintSet(s2);

	cout << "������" << endl;
	s1.swap(s2);
	PrintSet(s1);
	PrintSet(s2);
}

int main()
{
	//test01();
	test02();
}