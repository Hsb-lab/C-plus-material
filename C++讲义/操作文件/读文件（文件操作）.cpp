//�ļ�����
//��������ʱ���������ݶ�������ʱ���ݣ�����һ�����н������ᱻ�ͷ�
//ͨ���ļ����Խ����ݳ־û�
//C++�ж��ļ�������Ҫ����ͷ�ļ���fstream��

//�ļ����ͷ�Ϊ���֣�
//1.�ı��ļ� - �ļ����ı���ASCII����ʽ�洢�ڼ������
//2.�������ļ� �ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������

//�����ļ��������ࣺ
//1.ofstream ��д����
//2.ifstream ��������
//3.fstream ����д����

//�ı��ļ�
//д�ļ��������£�
//1.����ͷ�ļ��
//#include<fstream>
//2.����������
//ofstream ofs;
//3.���ļ�
//ofs.open("�ļ�·��",�򿪷�ʽ);
//4.д����
//ofs<<"д�������";
//5.�ر��ļ�
//ofs.close();

//�ļ��򿪷�ʽ
//ios::in     Ϊ���ļ������ļ�
//ios::out    Ϊд�ļ������ļ�
//ios::ate    ��ʼλ�ã��ļ�β
//ios::app    ׷�ӷ�ʽд�ļ�
//ios::trunc  ����ļ����ڣ���ɾ�����ٴ���
//ios::binary �����Ʒ�ʽ
//ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|������

//���ļ�
//���ļ���д�ļ��������ƣ����Ƕ�ȡ��ʽ����ڱȽ϶�
//���ļ��������£�
//1.����ͷ�ļ�
//#include <fstream>
//2.����������
//ifstream ifs;
//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//ifs.open("�ļ�·��"���򿪷�ʽ);
//4.��ȡ����
//���ַ�ʽ��ȡ
//5.�ر��ļ�
//ifs.close();

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//�ı��ļ� ���ļ�
void test01()
{
	//1.����ͷ�ļ�

	//2.����������
	ifstream ifs;
	//3.���ļ� �����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt",ios::in );
	if ( !ifs.is_open() )//ifs.is_open()�򿪳ɹ��᷵���棬��ʧ�ܷ��ؼ�
	{
		cout << "�ļ���ʧ��" << endl;
		return ;
	}
	//4.��ȡ����
	//��һ��
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//�ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)) )
	//{
	//	cout << buf << endl;
	//}

	//������
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//������
	char c;
	while ((c = ifs.get()) != EOF)//EOF  end of file
    //while(ifs.get(c))//Ҳ����ȡ��ͬ����Ч��
	{
		cout << c;
	}
	//5.�ر��ļ�
	ifs.close();
}

int main()
{
	test01();
}