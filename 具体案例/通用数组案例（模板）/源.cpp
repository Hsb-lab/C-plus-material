//��ģ�尸��
//����������ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//1.���Զ��������������Լ��Զ�����������ͽ��д洢
//2.�������е����ݴ洢������
//3.�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
//4.�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//5.����ͨ���±�ķ�ʽ���������е�Ԫ��
//6.���Ի�ȡ���鵱ǰԪ�ظ��������������
#include<iostream>
using namespace std;
#include"MyArray.hpp"

void printIntArray(MyArray <int>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	MyArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr1);
	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;


	MyArray<int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr2);
	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��" << endl;
	printIntArray(arr2);
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
	//MyArray<int>arr3(100);
	//arr3 = arr1;
}

//�����Զ������������
class Person
{
public:
	Person() {};
	Person(string name ,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << " ���䣺" << arr[i].m_Age << endl;
	}
}


void test02()
{
	MyArray<Person>arr(10);
	Person p1("�����", 999); arr.Push_Back(p1);
	Person p2("����", 18); arr.Push_Back(p2);
	Person p3("槼�", 20); arr.Push_Back(p3);
	Person p4("����", 25); arr.Push_Back(p4);
	Person p5("������",27); arr.Push_Back(p5);
	
	//��ӡ����
	printPersonArray(arr);

	//�������
	cout << "arr����Ϊ��" << arr.getCapacity() << endl;

	//�����С 
	cout << "arr��СΪ��" << arr.getSize() << endl;
}

int main()
{
	//test01();
	test02();
}