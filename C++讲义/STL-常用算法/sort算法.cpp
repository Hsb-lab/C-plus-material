//���������㷨
//ѧϰĿ�꣺���ճ��õ������㷨

//�㷨��飺
//sort;//��������Ԫ�ؽ�������
//random_shuffe;//ϴ�� ָ����Χ�ڵ�Ԫ�������������
//merge;//����Ԫ�غϲ������洢����һ������
//reverse��//��תָ����Χ��Ԫ��

//sort
//������������������Ԫ�ؽ�������

//����ԭ�ͣ�
//sort(iterator beg,iterator end ,_Pred);
//��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//beg��ʼ������
//end����������
//_Predν��

//�ܽ᣺
//sort���ڿ�������õ��㷨֮һ������������

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>

//ʵ�ִ�ӡ�ķº���
class Print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}

};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//����sort��������
	sort(v.begin(), v.end());

	for_each(v.begin(), v.end(), Print());
	cout << endl;

	//�ı�Ϊ����
	//sort(v.begin(), v.end(), Print());
	sort(v.begin(), v.end(),greater<int>());

	for_each(v.begin(), v.end(), Print());
	cout << endl;

}

int main()
{
	test01();
}