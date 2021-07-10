//类模板案例
//案例描述：实现一个通用的数组类，要求如下：
//1.可以对内置数据类型以及自定义的数据类型进行存储
//2.将数组中的数据存储到堆区
//3.提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//4.提供尾插法和尾删法对数组中的数据进行增加和删除
//5.可以通过下标的方式访问数组中的元素
//6.可以获取数组当前元素个数和数组的容量
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
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出为：" << endl;
	printIntArray(arr1);
	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;


	MyArray<int>arr2(arr1);
	cout << "arr2的打印输出为：" << endl;
	printIntArray(arr2);
	//尾删
	arr2.Pop_Back();
	cout << "arr2尾删后" << endl;
	printIntArray(arr2);
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;
	//MyArray<int>arr3(100);
	//arr3 = arr1;
}

//测试自定义的数据类型
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
		cout << "姓名：" << arr[i].m_Name << " 年龄：" << arr[i].m_Age << endl;
	}
}


void test02()
{
	MyArray<Person>arr(10);
	Person p1("孙悟空", 999); arr.Push_Back(p1);
	Person p2("韩信", 18); arr.Push_Back(p2);
	Person p3("妲己", 20); arr.Push_Back(p3);
	Person p4("赵云", 25); arr.Push_Back(p4);
	Person p5("安琪拉",27); arr.Push_Back(p5);
	
	//打印数组
	printPersonArray(arr);

	//输出容量
	cout << "arr容量为：" << arr.getCapacity() << endl;

	//输出大小 
	cout << "arr大小为：" << arr.getSize() << endl;
}

int main()
{
	//test01();
	test02();
}