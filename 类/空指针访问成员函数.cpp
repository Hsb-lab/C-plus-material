//空指针访问成员函数
//c++中空指针也是可以调用成员函数，但是也要注意又有没有用到this指针
//如果用到this指针，需要加以判断保证代码的健壮性
#include<iostream>
using namespace std;
class Person
{public :
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{  //报错原因是因为传入的指针是NULL （相当于无中生有）
		if (this == NULL)//提高代码的健壮性
		{
			return;
		}
		cout << "Age = " << this->m_Age << endl;
	}
	int m_Age;
};

void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main()
{
	test01();
}