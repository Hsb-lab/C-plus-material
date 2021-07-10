//函数模板的注意事项
//注意事项：
//1.自动类型推导，必须推导出一致的数据类型T才可以使用
//2.模板必须要确定出T的数据类型，才可以使用
#include<iostream>
using namespace std;
//函数模板的注意事项
//1.自动类型推导，必须推导出一致的数据类型T才可以使用
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
	mySwap(a, b);//正确！
	//mySwap(a, c);//错误!无法推导出一致的数据类型
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


//2.模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func调用" << endl;
}
void test02()
{
	func<int>();//要指定T的数据类型
}


int main()
{
	test01();
	test02();
}