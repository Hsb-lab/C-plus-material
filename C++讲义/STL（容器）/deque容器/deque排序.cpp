//deque����
//���������������㷨ʵ�ֶ�deque������������

//�㷨��
//sort(iterator beg,iterator end);//��beg��end�����ڵ�Ԫ�ؽ�������

//�ܽ᣺
//sort�㷨�ǳ�ʵ�ã�ʹ��ʱ����ͷ�ļ�algorithm����

#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//��׼�㷨ͷ�ļ�

void printDeque(const deque<int>d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//���� Ĭ��������� ��С���� ����
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	cout << "����ǰ��" << endl;
	printDeque(d);
	sort(d.begin(), d.end());
	//sort(d.rbegin(), d.rend());//��������
	cout << "�����" << endl;
	printDeque(d);

}

int main()
{
	test01();
}