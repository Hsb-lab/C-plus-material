//set���Һ�ͳ��
//����������
//��set�������в��������Լ�ͳ������

//����ԭ�ͣ�
//1.find(key);//����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//2.count(key);//ͳ��key��Ԫ�ظ���

//�ܽ᣺
//1.���ҡ���find�����ص��ǵ�������
//2.ͳ�ơ���count������set���ԣ����Ϊ0��1��

#include<iostream>
using namespace std;
#include<set>

void test01()
{
	set<int>s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ���Ԫ��" << endl;
	}
}

void test02()
{
	set<int>s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);

	//ͳ�Ƹ���
	//����set���ԣ�ͳ�ƽ��Ҫô��0��Ҫô��1
	int num = s1.count(30);
	cout << "num = " << num << endl;
}

int main()
{
	//test01();
	test02();
}