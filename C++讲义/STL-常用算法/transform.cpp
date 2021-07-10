//transform
//����������
//����һ����������һ��������

//����ԭ�ͣ�
//transform(iterator beg1,iterator end1,iterator beg2,_func);
//beg1ԭ������ʼ������
//end1ԭ��������������
//beg2Ŀ��������ʼ������
//_func�������ߺ�������

//�ܽ᣺
//���˵�Ŀ����������Ҫ��ǰ���ٿռ䣬�����޷���������

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

class Transform
{
public:
	int operator()(int v)
	{
		return v;
	}
};

class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget;
	//Ŀ������Ҫ��ǰ���ٿռ�
	//����Ҫ��ǰ�ƶ���С��������ٴ�����SB��
	vTarget.resize(v.size(),1);

	vTarget.push_back(1000);
	vector<int>::iterator it = vTarget.begin();

	transform(v.begin(), v.end(), it, Transform());
	for_each(vTarget.begin(), vTarget.end(), myPrint());
	cout << endl;
}

int main()
{
	test01();
}