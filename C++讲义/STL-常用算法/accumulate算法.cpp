//�������������㷨��
//ѧϰĿ�꣺���ճ��õ����������㷨

//ע�⣺
//���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ #include<numeric>

//�㷨��飺
//1.accumulate;//��������Ԫ���ۼ��ܺ�
//2.fill;//�����������Ԫ��

//accumulate
//������������������������Ԫ���ۼ��ܺ�

//����ԭ�ͣ�
//accumulate(iterator beg,iterator end,value);
//��������Ԫ���ۼ��ܺ�
//beg��ʼ������
//end����������
//value��ʼֵ

//�ܽ᣺
//accumulateʹ�õ�ͷ�ļ�ע����numeric������㷨��ʵ��

#include<iostream>
using namespace std;
#include<vector>
#include<numeric>

void test01()
{
	vector<int>v;
	v.reserve(100);
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	int num = accumulate(v.begin(), v.end(),0);
	cout << num << endl;
}

int main()
{
	test01();
}