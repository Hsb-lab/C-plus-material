//                                                      C++����ģ�ͺ�thisָ��
//��Ա�����ͳ�Ա�����ֿ��洢��
//��c++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա��������������Ķ�����
#include <iostream>
using namespace std;
class Person
{ public:
	int m_A ;//�Ǿ�̬��Ա���������ڵĶ����ϵ�
	static int m_B;//��̬��Ա�����������ڵĶ�����
	void func1() {}//�Ǿ�̬��Ա����
	static void func2() {}//��̬��Ա����
};
int Person::m_B = 0;
void test01()
{  //�ն���ռ���ڴ�ռ�Ϊ ��1
	//���ͣ�c++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	Person p; cout << sizeof(p) << endl;
	
}

//�ܽ᣺ֻ�зǾ�̬��Ա����������Ķ�����

void test02()
{
	Person p; cout << sizeof(p) << endl;
	
}

int main()
{
	//test01();
	test02();
}