//����ģ���ע������
//ע�����
//1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
#include<iostream>
using namespace std;
//����ģ���ע������
//1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap(a, b);//��ȷ��
	//mySwap(a, c);//����!�޷��Ƶ���һ�µ���������
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "func����" << endl;
}
void test02()
{
	func<int>();//Ҫָ��T����������
}


int main()
{
	test01();
	test02();
}