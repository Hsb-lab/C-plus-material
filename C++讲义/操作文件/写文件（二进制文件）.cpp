//�������ļ�
//�Զ����Ƶķ�ʽ���ж�д����
//�򿪷�ʽҪָ��Ϊ ios::binary


//д�ļ�
//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ�ͣ�ostream &write(const char *buffer , int len);//buffer   n. [��] ����������������[����] ������
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
#include<iostream>
#include<fstream>
using namespace std;
//�����ƿ��Բ����Զ������������
class Person
{
public:

	char m_Name[64];//����
	int m_Age;//����
};

void test01()
{
	//1.����ͷ�ļ�

	//2.����������
	ofstream ofs("Person.txt", ios::out | ios::binary);//Ҳ�����ڴ��������ͬʱָ���ļ�·���ʹ򿪷�ʽ

	//3.���ļ�
	//ofs.open("Person.txt", ios::out | ios::binary);

	//4.д�ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));//�����漰��ǿ������ת��

	//5.�ر��ļ�
	ofs.close();
}

//�ܽ᣺
//�ļ�������������ͨ��write�������Զ����Ƶķ�ʽд����

int main()
{
	test01();
}