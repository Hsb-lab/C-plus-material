//vector容量和大小
//功能描述：
//对vector容器的容量和大小操作

//函数原型：
//empty();//判断容器是否为空
//capacity();//容器的容量
//size();//返回容器中元素的个数        容量>=容器大小
//resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置（默认填充0）
                  //如果容器变短，则末尾超出容器长的元素被删除
//resize(int num，int elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置
                  //如果容器变短，则末尾超出容器长的元素被删除

//总结：
//1.判断是否为空 -- empty
//2.返回元素个数 -- size
//3.返回容器容量 -- capacity
//4.重新指定大小 -- resize

#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>& v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())//为空返回1，否则返回0
    {
        cout << "容器为空" << endl;
    }
    else
    {
        cout << "容器不为空" << endl;
        cout << "容器的容量为：" << v1.capacity() << endl;
        cout << "容器的大小为：" << v1.size() << endl;
    }

    //重新指定大小
    v1.resize(15 ,100);
    printVector(v1);
    
    v1.resize(5);
    printVector(v1);//如果重新指定的比原来短了，超出的部分会被删除
}

int main()
{
    test01();
}