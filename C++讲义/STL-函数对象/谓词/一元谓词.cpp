//ν�ʣ�Pred��
//ν�ʸ��
//1.����bool���͵ķº�����Ϊν��
//2.���operator()����һ����������ô����һԪν��
//3.���operator()����������������ô������Ԫν��

//�ܽ᣺
//����ֻ��һ����ν�ʣ���ΪһԪν��

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Greater5
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//���������� �Ƿ��д���5������
	//ʹ��������������
	vector<int>::iterator it = find_if(v.begin(), v.end(), Greater5());
	if (it == v.end())
	{
		cout << "δ�ҵ���������������" << endl;
	}
	else
	{
		cout << "�ҵ�����" << endl;
		cout << *it << endl;
	}
}

int main()
{
	test01();
}