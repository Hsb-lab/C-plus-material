//��̬
//��̬�Ļ�������
//��̬��c++����������������֮һ
//��̬��Ϊ����
//1.��̬��̬���������� �� ��������� - ����׶�ȷ��������ַ
//2.��̬��̬����������麯��ʵ������ʱ��̬
//��̬��̬�Ͷ�̬��̬������
//1.��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
//2.��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ
#include<iostream>
using namespace std;
class Animal
{
public:
	  void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat:public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};
//����
class Dog : public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};
//ִ��˵���ĺ���
//��ַ��󶨣��ڱ���׶ξͿ���ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬��̬��������
//1.�м̳й�ϵ
//2.����Ҫ��д������麯��
//Ҫ������д �� ����
//��д����������ֵ���� ������ �����б� ��ȫһ�³�Ϊ��д

void doSpeak(Animal& animal)  //Animal & animal = cat;
//C++��������������֮�������ת��������Ҫǿ������ת��
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
	Animal animal;
	doSpeak(animal);
}
void test02()
{
	cout << "sizeof(Animal) = " << sizeof(Animal) << endl;
}
int main()
{
	test01();
	//test02();
}
//vfptr  v-virtual   f-function  ptr-pointer 
//vftable v-virtual  f-function  table-��   �����ڼ�¼�麯���ĵ�ַ��

//Animal���ڲ��ṹ  �麯������ָ�루vfptr�� ->  �麯����vftable��
//   vftable 
//     &Animal::speak

//Cat���ڽṹ       �麯������ָ�루vfptr�� ->  �麯����vftable��
//   vftable 
//     &Cat::speak
//����������д�˸�����麯���������е��麯�����ڲ� ���滻�� ������麯����ַ 
//�������ָ���������ָ���������ʱ��������̬��