//读文件
//二进制方式读文件主要利用流对象调用成员函数read
//函数原型： istream read(char * buffer , int len);
//参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数
#include<iostream>
#include<fstream>
using namespace std;

//要想读什么数据类型的文件就要准备好相应的数据来接收它
class Person
{
public:
	char m_Name[64];//姓名
	int m_Age;//年龄
};
//二进制文件 读文件
void test01()
{
	//1.包含头文件

	//2.创建流对象
	ifstream ifs;
	//3.打开文件 并判断文件是否打开成功
	ifs.open("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << endl;
	cout << "年龄：" << p.m_Age << endl;
		//5.关闭文件
		ifs.close();
}

int main()
{
	test01();
}