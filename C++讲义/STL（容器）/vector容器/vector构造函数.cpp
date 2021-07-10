//vector容器
//vector基本概念
//功能：vector数据结构和数组非常相似，也成为单端数组

//vector与普通数组区别：
//不同之处在于数组是静态空间，而vector可以动态扩展

//动态扩展：
//并不是在原空间之后续接新空间，而是寻找更大的内存空间，然后将原数据拷贝到新空间，释放原空间

//front()  back()  push_back()  pop_back()  insert()
//v.begin()  v.end()  v.rbegin()（指向倒数第一个元素）  v.rend()（指向第一个元素的前一个位置） 
//vector容器的迭代器是支持随机访问的迭代器

//vector构造函数
//功能描述：创建vector容器
//函数原型：
//1.vector<T>v;//采用模板实现类实现，默认构造函数
//2.vector(v.begin(),v.end());//将[v.begin(),v.end())区间中的元素拷贝给本身（注意是左开右闭）
//3.vector(n,elem);//构造函数将n个elem拷贝给本身
//4.vector(const vector &vec);//拷贝构造函数

//总结：
//vector的多种构造方式没有可比性，灵活使用即可

#include<iostream>
using namespace std;
#include<vector>

void printVector( const vector<int> & v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;//默认构造 无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//通过区间方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	//n个elem方式构造
	vector<int>v3(10, 100);//第一个参数是个数，第二个参数是赋值
	printVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printVector(v4);
}

int main()
{
	test01();
}