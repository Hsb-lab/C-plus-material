//binary_search������ֵ��bool�������ͣ�
//��������������ָ��Ԫ���Ƿ����

//����ԭ�ͣ�
//bool binary_search(iterator beg,iterator end,value);
//����ָ����Ԫ�أ����ҷ���true�����򷵻�false
//ע�⣺�����������в�����
//beg��ʼ������
//end����������
//value���ҵ�Ԫ��

//�ܽ᣺
//���ֲ��ҷ��Ĳ���Ч�ʺܸߣ�ֵ��ע����ǲ��ҵ������е�Ԫ�ر�������������

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//���������������
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "���ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
}

int main()
{
	test01();
}