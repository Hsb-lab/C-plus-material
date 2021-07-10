//set/multiset����
//set��������
//��飺����Ԫ�ض����ڲ���ʱ�Զ�������

//���ʣ�set/multiset���ڹ���ʽ�������ײ�ṹʹ�ö������ṹʵ��

//set��multiset����
//1.set���������������ظ���Ԫ��
//2.multiset�������������ظ���Ԫ��

//set����͸�ֵ
//��������������set�����Լ���ֵ

//����ԭ�ͣ�
//���죺
//1.set<T>st;//Ĭ�Ϲ��캯��
//2.set(const set &st);//�������캯��

//��ֵ��
//set & operator= (const set &st);//���صȺŲ�����

//�ܽ᣺
//1.set������������ʱ��insert
//2.set������������ݻ��Զ�����

#include<iostream>
using namespace std;
#include<set>

void PrintSet(set<int>s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;

	//��������ֻ��insert��ʽ
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);
	
	//��������
	//set�����ص㣺
	//1.����Ԫ�ز���ʱ�Զ�������
	//2.set��������������ظ�ֵ
	PrintSet(s1);

	//��������
	set<int>s2(s1);
	PrintSet(s2);

	//��ֵ
	set<int>s3;
	s3 = s2;
	PrintSet(s3);
}

int main()
{
	test01();
}
