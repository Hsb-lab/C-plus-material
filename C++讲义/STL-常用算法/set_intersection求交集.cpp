//���ü����㷨������ֵ��Ϊ��������
//ѧϰĿ�꣺
//���ճ��õļ����㷨

//�㷨��飺
//1.set_intersection;//�����������Ľ���
//2.set_union;//�����������Ĳ���
//3.set_difference;//�����������Ĳ

//set_intersection������ֵ�ǵ�������
//���������������������Ľ���

//����ԭ�ͣ�
//set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
//�����������Ľ���
//ע�⣺�������ϱ�������������
//beg1����1��ʼ������
//end1����1����������
//beg2����2��ʼ������
//end2����2����������
//destĿ��������ʼ������

//�ܽ᣺
//1.�󽻼����������ϱ�������������
//2.Ŀ���������ٿռ���Ҫ������������ȡСֵ
//3.set_intersection����ֵ�ǽ��������һ��Ԫ�ص�λ��

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	vector<int>v2;

	//Ŀ������
	vector<int>vTarget;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vTarget.resize(min(v1.size(), v2.size()));

	vector<int>::iterator pos = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), pos, myPrint);
}

int main()
{
	test01();
}