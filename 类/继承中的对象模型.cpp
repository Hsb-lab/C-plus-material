//继承中的对象模型
//问题：从父类继承过来的成员，哪些属于子类对象
#include <iostream>
using namespace std;
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base
{
public:
	int m_D;

};
//利用开发人员命令提示工具查看对象模型
//跳转盘符 D：
//跳转文件路径 cd 具体路径下
//查看命名
//cl / d1 reportSingleClassLayout类名 文件名

void test01()
{//父类中非所有非静态成员属性都会被子类继承
	//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到，但却是被继承下去了
	cout << "size of Son = " << sizeof(Son) << endl;
}
int main()
{
	test01();
}