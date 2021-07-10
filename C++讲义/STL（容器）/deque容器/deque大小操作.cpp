//deque大小操作（deque没有容量capacity的概念）（一定要注意！）
//功能描述：对deque容器的大小进行操作

//函数原型：
//deque.empty();//判断容器是否为空
//deque.size();//返回容器中元素个数
//deque.resize(num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置，
                    //如果容器变短，则末尾超出容器长度的元素被删除
//deque.resize(num);//重新指定容器的长度为num，若容器变长，则以elem填充新位置，
                   //如果容器变短，则末尾超出容器长度的元素被删除

//总结：
//1.deque没有容量的概念
//2.判断是否为空 -- empty
//3.返回元素个数 -- size
//4.重新指定个数 -- resize

#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>& d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int>d1;//没有容量capacity的概念
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);
    if (d1.empty())
    {
        cout << "容器为空" << endl;
    }
    else
    {
        cout << "容器不为空" << endl;
        cout << "容器的大小为：" << d1.size() << endl;
    }

    //重新指定大小
    d1.resize(15);
    printDeque(d1);

    d1.resize(15, 1);
    printDeque(d1);

    d1.resize(5);
    printDeque(d1);
}

int main()
{
    test01();
}