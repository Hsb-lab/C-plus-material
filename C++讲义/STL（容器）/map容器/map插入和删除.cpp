//map插入和删除
//功能描述：
//map容器进行插入数据和删除数据

//函数原型：
//1.insert(elem);//在容器中插入元素
//2.clear();//清除所有元素
//3.erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器
//4.erase(beg,end);//删除区间[beg,end)的所有元素，返回下一个元素的迭代器
//5.erase(key);//删除容器中值为key的元素

//总结：
//map插入方式很多，记住其一即可
//1.插入——insert
//2.删除——erase
//3.清空——clear

#include<iostream>
using namespace std;
#include<map>

void PrintMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m;

	//插入
	//第一种
	m.insert(pair<int, int>(1, 10));

	//第二种
	m.insert(make_pair(2, 20));

	//第三种
	m.insert(map<int, int>::value_type(3, 30));

	//第四种(重载了[])
	m[4] = 40;

	//[]不建议插入，用途：可以利用key访问value
	//cout << m[5] << endl;
	PrintMap(m);

	//删除
	m.erase(m.begin());
	PrintMap(m);

	//重载的版本，参数是key值，按照key删除
	m.erase(3);
	PrintMap(m);

	//m.erase(m.begin(), m.end());
	m.clear();
	PrintMap(m);
}

int main()
{
	test01();
}