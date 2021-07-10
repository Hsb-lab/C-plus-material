//二进制文件
//以二进制的方式进行读写操作
//打开方式要指定为 ios::binary


//写文件
//二进制方式写文件主要利用流对象调用成员函数write
//函数原型：ostream &write(const char *buffer , int len);//buffer   n. [计] 缓冲区；缓冲器，[车辆] 减震器
//参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数
#include<iostream>
#include<fstream>
using namespace std;
//二进制可以操纵自定义的数据类型
class Person
{
public:

	char m_Name[64];//姓名
	int m_Age;//年龄
};

void test01()
{
	//1.包含头文件

	//2.创建流对象
	ofstream ofs("Person.txt", ios::out | ios::binary);//也可以在创建对象的同时指定文件路径和打开方式

	//3.打开文件
	//ofs.open("Person.txt", ios::out | ios::binary);

	//4.写文件
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));//里面涉及到强制类型转换

	//5.关闭文件
	ofs.close();
}

//总结：
//文件输出流对象可以通过write函数，以二进制的方式写数据

int main()
{
	test01();
}