//内建函数对象
//内建函数对象意义

//概念：STL内建了一些函数对象

//分类：
//1.算术仿函数
//2.关系仿函数
//3.逻辑仿函数

//用法：
//1.这些仿函数所产生的对象，用法和一般函数完全相同
//2.使用内建函数对象，需要引入头文件 #include<functional>

//算术仿函数（返回值为T，即给定的数据类型）
//功能描述：
//1.实现四则运算
//2.其中negate是一元谓词，其他都是二元谓词

//仿函数原型：（本质上是一个类）
//1.template<class T>T plus<T>;//加法仿函数
//2.template<class T>T minus<T>;//减法仿函数
//3.template<class T>T multiplies<T>;//乘法仿函数
//4.template<class T>T divides<T>;//除法仿函数
//5.template<class T>T modulus<T>;//取模仿函数
//6.template<class T>T negate<T>;//取反仿函数

//总结：
//1.内建函数对象大都采用模板实现，一般只传入一个数据类型
//2.使用内建函数对象时，需要引入头文件 #include<functional>

#include<iostream>
using namespace std;
#include<functional>

//negate 一元仿函数

void test01()
{
	negate<int>n;
	cout << n(50) << endl;
}

//plus 二元仿函数
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