//�ڽ���������
//�ڽ�������������

//���STL�ڽ���һЩ��������

//���ࣺ
//1.�����º���
//2.��ϵ�º���
//3.�߼��º���

//�÷���
//1.��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
//2.ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional>

//�����º���������ֵΪT�����������������ͣ�
//����������
//1.ʵ����������
//2.����negate��һԪν�ʣ��������Ƕ�Ԫν��

//�º���ԭ�ͣ�����������һ���ࣩ
//1.template<class T>T plus<T>;//�ӷ��º���
//2.template<class T>T minus<T>;//�����º���
//3.template<class T>T multiplies<T>;//�˷��º���
//4.template<class T>T divides<T>;//�����º���
//5.template<class T>T modulus<T>;//ȡģ�º���
//6.template<class T>T negate<T>;//ȡ���º���

//�ܽ᣺
//1.�ڽ���������󶼲���ģ��ʵ�֣�һ��ֻ����һ����������
//2.ʹ���ڽ���������ʱ����Ҫ����ͷ�ļ� #include<functional>

#include<iostream>
using namespace std;
#include<functional>

//negate һԪ�º���

void test01()
{
	negate<int>n;
	cout << n(50) << endl;
}

//plus ��Ԫ�º���
void test02()
{
	plus<int>n;
	cout << n(10, 20) << endl;
}

int main()
{
	//test01();
	test02();
}