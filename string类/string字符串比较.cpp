//string�ַ����Ƚ�
//����������
//�ַ���֮��ıȽ�

//�ȽϷ�ʽ��
//�ַ����Ƚ��ǰ��ַ���ASCII����Ա�
//= ����0
//> ����1
//< ����-1

//����ԭ�ͣ�
//int compare(const string & s);//���ַ���s�Ƚ�
//int compare(const char * s);//���ַ���s�Ƚ�

//�ܽ᣺
//�ַ����Ա���Ҫ�����ڱȽ������ַ����Ƿ���ȣ��ж�˭��˭С�����岢���Ǻܴ�

#include<iostream>
using namespace std;

void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1  ���� str2" << endl;
	}

	else
	{
		cout << "str1  С�� str2" << endl;
	}


}

int main()
{
	test01();
}