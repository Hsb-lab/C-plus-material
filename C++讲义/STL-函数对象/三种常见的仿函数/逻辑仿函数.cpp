//�߼��º���������ֵΪbool�������ͣ�
//����������ʵ���߼�����

//����ԭ�ͣ�
//1.template<class T> bool logical_and<T>;//�߼���
//2.template<class T> bool logical_or<T>;//�߼���
//3.template<class T> bool logical_not<T>;//�߼���

//�ܽ᣺
//�߼��º���ʵ�������٣��˽⼴��

#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�����߼��� ������v���˵�����v2�У���ִ��ȡ������
	vector<bool>v2;
	//����Ҫ��ǰ���ٿռ�
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	bool a = 5 > 10;
	bool b;
	logical_not<bool>p1;
	b = p1(a);
	cout << "a = " << a << " b = " << b << endl;

	logical_and<bool>p2;
	cout <<"�߼��룺"<<p2(a,b) << endl;

	logical_or<bool>p3;
	cout << "�߼���" << p3(a, b) << endl;
}

int main()
{
	//test01();
	test02();
}