//set_difference
//�������������������ϵĲ

//����ԭ�ͣ�
//set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
//���������ϵĲ
//ע�⣺�������ϱ�������������
//beg1����1��ʼ������
//end1����1����������
//beg2����2��ʼ������
//end2����2����������
//destĿ��������ʼ������

//�ܽ᣺
//1.�����������ϱ�������������
//2.Ŀ���������ٿռ���Ҫ��������ȡ�ϴ�ֵ

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//Ŀ������
	vector<int>vTarget;
	vTarget.resize( max(v1.size(), v2.size()) );

	vector<int>::iterator pos = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), pos, myPrint);
	cout << endl;

	pos = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), pos, myPrint);
	cout << endl;

}

int main()
{
	test01();
}