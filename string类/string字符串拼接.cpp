//string�ַ���ƴ��
//����������ʵ�����ַ���ĩβƴ���ַ���

//����ԭ�ͣ�
//1.string & operator+=��const char * str��;//����+=������
//2.string & operator+=��const char c��;//����+=������
//3.string & operator+=��const string & str��;//����+=������
//4.string & append��const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
//5.string & append��const char *s �� int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//6.string & append��const string & s);//ͬoperator+=��const string & str��
//7.string & append��const string & s �� int pos , int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
//�ܽ᣺�ַ���ƴ�ӵ����ذ汾�ܶ࣬��ѧ�׶μ�ס���м���
#include<iostream>
using namespace std;
#include<string>

void test01()
{
	//��ò�Ҫ��Ӣ�Ļ�������C++�в�����
	string str1 = "��";
	str1 += "��Զϲ�����������!";
	cout << str1 << endl;

	str1 += '!';
	cout << str1 << endl;

	string str2 = "ֿ����˿�ȣ�";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" love");
	cout << str3<<endl;
	str3.append(" Asuna adcde", 6);
	cout << str3 << endl;

	str3.append(str2);
	cout << str3 << endl;

	str3.append(str2, 3, 3);//�����������ڶ�������Ϊ��ʼ��ȡ��λ�ã�����������Ϊ��ȡ�ĸ���
	cout << str3 << endl;
}

int main()
{
	test01();
}