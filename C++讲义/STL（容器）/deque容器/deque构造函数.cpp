//deque容器（双端队列；双队列）
//deque容器的基本概念
//功能：双端数组，可以对头端进行插入和删除操作

//deque和vector区别：
//1.vector对于头部插入的效率低，数据量越大，效率越低
//2.deque相对而言，对头部的插入删除速度会比vector快
//3.vector访问元素时的速度会比deque快，这和两者的内部实现有关

//deque内部工作原理
//deque内部有个中控器，维护每个缓冲区中的内容，缓冲区中存放真实数据
//中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间

//deque容器的迭代器也是支持随机访问的

//deque构造函数
//功能描述：deque容器构造

//函数原型：
//1.deque<T>deqT;//默认构造形式
//2.deque(beg,end);//构造函数将[bed,end)区间中的元素拷贝给本身
//3.deque(n,elem);//构造函数将n个elem拷贝给本身
//4.deque(const deque & deq);//拷贝构造函数

//总结：
//deque容器和vector容器的构造方式几乎一致，灵活使用即可

#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>& d)//const防止误操作
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//容器中的数据不可以修改了
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2(d1.begin(),d1.end());
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);
}

int main()
{
	test01();
}