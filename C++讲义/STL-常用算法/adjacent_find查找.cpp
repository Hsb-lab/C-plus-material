//adjacent_find
//������������������Ԫ���ظ�Ԫ��

//����ԭ�ͣ�
//adjacent_find(iterator beg,iterator end);
//���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����
//beg��ʼ������
//end����������

//�ܽ᣺
//��������������ֲ��������ظ�Ԫ�أ��ǵ���STL�е�adjacent_find�㷨

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());

	if (it == v.end())
	{
		cout << "δ�ҵ������ظ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ�أ������ظ�Ԫ��Ϊ��" << *it << endl;
	}

}

int main()
{
	test01();
}