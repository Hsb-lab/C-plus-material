//��������
//�����������
//1.���غ������ò��������࣬������Ϊ��������
//2.��������ʹ�����ص�()����Ϊ���ƺ������ã�Ҳ�зº���

//���ʣ�
//�������󣨷º�������һ���࣬����һ������

//��������ʹ�ã�
//�ص㣺
//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//3.�������������Ϊ���󴫵�

//�ܽ᣺
//�º���д���ǳ���������Ϊ�������д���

#include<iostream>
using namespace std;

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}

};

//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}

	int count;//�ڲ��Լ���״̬
};

void test02()
{
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "myPrint���õĴ���Ϊ��" << myPrint.count << endl;
}

//3.�������������Ϊ���󴫵�

void doPrint(MyPrint& mp, string test)
{
	mp(test);
}

void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "hello C++");
}

int main()
{
	//test01();
	//test02();
	test03();
}