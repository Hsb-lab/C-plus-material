//string�Ӵ�
//����������
//���ַ����л�ȡ��Ҫ���Ӵ�

//����ԭ�ͣ�
//string substr(int pos = 0 , int n = npos)const;//������pos��ʼ��n���ַ���ɵ��ַ���

//�ܽ᣺
//�����������Ӵ����ܣ�������ʵ�ʿ����л�ȡ��Ч����Ϣ

#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "abcdef";
	string substr = str.substr(1, 3);
	cout << "sub str = " << substr << endl;
}

void test02()
{
	string email = "Asuna@sina.com";

	//���ʼ���ַ�� ��ȡ �û���Ϣ
	int pos = email.find("@");
	string substrName = email.substr(0,pos);
	cout << substrName << endl;
}

int main()
{
	//test01();
	test02();
}