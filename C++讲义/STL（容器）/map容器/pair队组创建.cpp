//pair���鴴��������Ҫ����ͷ�ļ���
//����������
//�ɶԳ��ֵ����ݣ����ö�����Է�����������

//���ִ�����ʽ��
//1.pair<type,type>p(value1,value2);
//2.pair<type,type>p = make_pair(value1,value2);

//�ܽ᣺
//���ַ�ʽ�����Դ������飬��סһ�ּ���
#include<iostream>
using namespace std;

void test01()
{
	//��һ�ַ�ʽ
	pair<string, int>p("Tom", 20);
	cout << "������" << p.first << " ���䣺" << p.second << endl;

	//�ڶ��ַ�ʽ
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}

int main()
{
	test01();
}