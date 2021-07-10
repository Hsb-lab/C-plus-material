//vector互换容器
//功能描述：
//实现两个容器内元素进行互换

//函数原型：
//swap(vec);//将vec与本身的元素互换

//总结：
//swap可以使两个容器互换，可以达到实用的收缩内存的效果

#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;	
}

//1.基本使用
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "交换前：" << endl;
	printVector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "交换后：" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

//2.实际用途
//巧用swap可以收缩内存空间
void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
	
	//重新指定大小
	v.resize(3);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	//巧用swap收缩内存
	//原理：创建一个匿名的容器与要缩小的容器交换，利用系统自动回收匿名对象的空间
	//注意：要利用拷贝构造函数（拷贝要缩小的容器）来初始化匿名对象，否则将丢失原来容器中的数据
	//要熟悉匿名对象的特点：当匿名对象没有进行绑定操作，会自动进行析构
	//匿名对象，当前行执行完成后对象自动析构
	vector<int>(v).swap(v);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
}

int main()
{
	//test01();
	test02();
}