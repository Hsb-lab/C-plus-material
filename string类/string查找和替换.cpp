//string���Һ��滻
//����������
//���ң�����ָ���ַ����Ƿ����
//�滻����ָ����λ���滻�ַ���

//����ԭ�ͣ�
//1.int find(const string &str , int pos = 0)const;//����str��һ�γ���λ�ã���pos��ʼ����
//2.int find(const char * s , int pos = 0)const;//����s��һ�γ���λ�ã���pos��ʼ����
//3.int find(const char * s , int pos , int n)const;//��posλ�ò���s��ǰn���ַ���һ��λ��
//4.int find (const char c , int pos = 0)const;//�����ַ�c��һ�γ���λ��
//5.int rfind(const string &str , int pos = npos)const;//����str���һ��λ�ã���pos��ʼ����
//6.int rfind(const char * s , int pos = npos)const;//����s���һ��λ�ã���pos��ʼ����
//7.int rfind(const char * s , int pos �� int n)const;//��pos����s��ǰn���ַ����һ��λ��
//8.int rfind (const char c , int pos = 0)const;//�����ַ�c���һ�γ���λ��
//9.string & replace��int pos �� int n��const string & str��;//�滻��pos��ʼn���ַ�Ϊ�ַ���str
//10.string & replace��int pos �� int n��const char * s��;//�滻��pos��ʼn���ַ�Ϊ�ַ���s

//�ܽ᣺
//find�����Ǵ������ң�rfind��������
//find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
//replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���

#include<iostream>
using namespace std;

void test01()
{
	//1.����
	//��0��ʼ����
	//δ�ҵ��ַ�������-1
	string str1 = "abcdefgde";
	int pos = str1.find("df");
	if (pos == -1)  cout << "δ�ҵ��ַ���" << endl;
	else            cout << "pos = " << pos << endl;

	//rfind
	//rfind�����������  find�������Ҳ���
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

void test02()
{
	//2.�滻
	string str1 = "abcdefg";

	//��1��λ����3���ַ����滻Ϊ1111
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;

}


int main()
{
	//test01();
	test02();
}