//string�ַ���ȡ
//string�е����ַ���ȡ��ʽ������

//����ԭ��
//char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
//char& at(int n);//ͨ��at������ȡ�ַ�

//�ܽ᣺
//string�ַ����е����ַ���ȡ�����ַ�ʽ������[]��at()

#include<iostream>
using namespace std;

void test01()
{
	string str = "hello";
	//cout << "str = " << str << endl;

	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] <<" ";
	}
	cout << endl;


	//2.ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	//�����Ƽ���һ�ַ���

	// �޸�
	str[0] = 'x';
	cout << "str = " << str << endl;

	str[1] = 'x';
	cout << "str = " << str << endl;
}

int main()
{
	test01();
}