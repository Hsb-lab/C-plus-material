//string��������
//���ʣ�
//string��C++�����ַ�������string��������һ����

//string��char*������
//1.char*��һ��ָ��
//2.string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*������

//�ص㣺
//string���ڲ���װ�˺ܶ��Ա������
//���磺����find������copy��ɾ��delete���滻replace������insert
//string����char*��������ڴ棬���õ��ĸ���Խ������⣬�����ڲ����и���

//string���캯��
//���캯��ԭ�ͣ�
//1.string������//����һ���յ��ַ������磺string str��
//2.string��const char *s����//ʹ���ַ���s��ʼ��
//3.string��const string & str����//ʹ��һ��string�����ʼ����һ��string����
//4.string��int n��char c��//ʹ��n���ַ�c��ʼ��
//5.�ܽ᣺string�Ķ��ֹ��췽ʽû�пɱ��ԣ�������ü���
#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string s1;//Ĭ�Ϲ���,s1Ϊ���ַ���

	const char* str = "hello world";
	string s2(str);
	cout << s2 << endl;

	string s3(s2);
	cout << s3 << endl;

	string s4(10,'a');
	cout << s4 << endl;
}

int main()
{
	test01();
}