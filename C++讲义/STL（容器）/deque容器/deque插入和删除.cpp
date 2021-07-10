//deque插入和删除
//功能描述：向deque容器中插入和删除数据

//函数原型：
//两端插入操作：
//1.push_back(elem);//在容器尾部添加一个数据
//2.push_front(elem);//在容器头部插入一个数据
//3.pop_back(elem);//删除容最后一个数据
//4.pop_front(elem);//删除容器第一个数据
//指定位置操作：
//1.insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置
//2.insert(pos,n,elem);//在pos位置插入n个elem数据，有返回值
//3.insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，有返回值
//4.clear();//清空容器中的所有数据
//5.erase(beg , end);//删除[beg,end)区间的数据，并返回下一个数据的位置
//6.erase(pos);//删除pos位置的数据，返回下一个数据的位置。

//总结：
//1.插入和删除提供的位置是迭代器！
//2.尾插 -- push_back
//3.尾删 -- pop_back
//4.头插 -- push_front

#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);

	//200 100 10 20
	//printDeque(d1);

	//尾删
	d1.pop_back();

	//200 100 10 
	//printDeque(d1);

	//头删
	d1.pop_front();

	//100 10
	//printDeque(d1);

}

void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//200 100 10 20
	//printDeque(d1);

	//insert插入
	deque<int>::iterator it01 =  d1.insert(d1.begin(), 2000);
	//printDeque(d1);
	cout << *it01 << endl;

	deque<int>::iterator it02 = d1.insert(d1.begin(), 2,20000);
	//printDeque(d1);
	cout << *it02 << endl;

	//按照区间进行插入
	deque<int>d2;
	d2.push_back(54);
	d2.push_back(2);
	d2.push_back(3);

	deque<int>::iterator it03 = d1.insert(d1.begin(), d2.begin(), d2.end());
	//printDeque(d1);
	cout << *it03 << endl;
}

void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//删除
	//deque<int>::iterator it = d1.begin();
	//it++;
	//deque<int>::iterator it04 = d1.erase(it);
	//printDeque(d1);
	//cout << *it04 << endl;

	//按照区间的方式删除


	deque<int>::iterator it05  = d1.erase(d1.begin(), --d1.end());
	cout << *it05 << endl;
	//d1.clear();
	//printDeque(d1);
}

int main()
{
	//test01();
	//test02();
	test03();
}