//list��ת������
//�����������������е�Ԫ�ط�ת���Լ��������е����ݽ�������

//����ԭ�ͣ�
//reverse();//��ת����
//sort();//��������

//�ܽ᣺
//��ת����reverse
//���򡪡�sort����Ա������

#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��ת
void test01()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	printList(L1);

	L1.reverse();
	printList(L1);
}

bool myCompare(int v1,int v2)
{
	//���� ���õ�һ���� > �ڶ�����
	return v1 > v2;
}

//����
void test02()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "����ǰ��";
	printList(L1);

	//���в�֧��������ʵ��������������������ñ�׼�㷨
	//��֧��������ʵ��������������ڲ����ṩһЩ��Ӧ���㷨
	L1.sort();//Ĭ��������� ��С���� ����
	cout << "�����";
	printList(L1);

	L1.sort(myCompare);//��ʹ��ȫ�ֺ���sort������ʹ�ó�Ա����sort
	printList(L1);
}

int main()
{
	//test01();
	test02();
}