//string�����ɾ��
//����������
//��string�ַ������в����ɾ���ַ�����

//����ԭ��
//string &insert(int pos , const char *s );//�����ַ���
//string &insert(int pos , const string & str );//�����ַ���
//string &insert(int pos , int n,char c);//��ָ��λ�ò���n���ַ�c
//string &erase(int pos , int n = npos);//ɾ����pos��ʼ��n���ַ�

//�ܽ᣺
//�����ɾ������ʼ�±궼�Ǵ�0��ʼ

#include<iostream>
using namespace std;

//�ַ��� �����ɾ��
void test01()
{
	string str = "hello";

	//����
	str.insert(1, "111");
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;
}

int main()
{
	test01();
}