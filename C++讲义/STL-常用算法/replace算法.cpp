//replace
//������������������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��

//����ԭ�ͣ�
//replace(iterator beg,iterator end,oldvalue,newvalue);
//�������ھ�Ԫ�� �滻�� ��Ԫ��
//beg��ʼ������
//end����������
//oldvalue��Ԫ��
//newvalue��Ԫ��

//�ܽ᣺
//replace���滻����������������Ԫ��

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
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(20);

	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{
	test01();
}