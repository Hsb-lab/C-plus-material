//list��ȡ����
//������������list���������ݽ��д�ȡ
//��list��֧��������ʵ���������֧�ֵ�˫���������

//����ԭ�ͣ�
//1.front();//���ص�һ��Ԫ��
//2.back();//�������һ��Ԫ��

//�ܽ᣺
//1.list�����в�����ͨ��[]����at��ʽ��������
//2.���ص�һ��Ԫ�ء���front
//3.�������һ��Ԫ�ء���back

#include<iostream>
using namespace std;
#include<list>

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//list�������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�

	cout << "��һ��Ԫ��Ϊ��" << L1.front() <<endl;
	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;

	//�������ǲ�֧��������ʵ�
	list<int>::iterator it = L1.begin();
	it++;//֧��˫��
	it--;
	cout << *it << endl;
}

int main()
{
	test01();
}