//���ļ�
//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//����ԭ�ͣ� istream read(char * buffer , int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
#include<iostream>
#include<fstream>
using namespace std;

//Ҫ���ʲô�������͵��ļ���Ҫ׼������Ӧ��������������
class Person
{
public:
	char m_Name[64];//����
	int m_Age;//����
};
//�������ļ� ���ļ�
void test01()
{
	//1.����ͷ�ļ�

	//2.����������
	ifstream ifs;
	//3.���ļ� ���ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_Name << endl;
	cout << "���䣺" << p.m_Age << endl;
		//5.�ر��ļ�
		ifs.close();
}

int main()
{
	test01();
}