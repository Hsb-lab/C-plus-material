//STL-�����㷨
//������
//1.�㷨��Ҫ����ͷ�ļ� #include<algorithm> #include<numeric> #include<functional>���
//2.<algorithm>������STLͷ�ļ�������һ������Χ�漰���Ƚϡ����������ҡ��������������ơ��޸ĵ�
//3.<numeric>�����С��ֻ��������������������м���ѧ�����ģ�庯��
//4.<functional>������һЩģ���࣬����������������

//���ñ����㷨
//ѧϰĿ�꣺���ճ��õı����㷨

//�㷨��飺
//1.for_each;//��������
//2.transform;//������������һ��������

//for_each
//����������ʵ�ֱ�������

//����ԭ�ͣ�
//for_each(iterator beg,iterator end,_func);
//�����㷨 ��������Ԫ��
//beg��ʼ������
//end����������
//_func�������ߺ�������

//�ܽ᣺
//for_each��ʵ�ʿ���������õı����㷨����Ҫ��������

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//��ͨ����
void Print01(int val)
{
	cout << val << " ";
}

//�º���
class Print02
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

	for_each(v.begin(), v.end(), Print01);
	cout << endl;

	for_each(v.begin(), v.end(), Print02());
	cout << endl;
}

int main()
{
	test01();
}