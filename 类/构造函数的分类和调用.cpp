//���캯���ķ��༰����
#include <iostream>
using namespace std;
//����
//  ���ղ������� �޲ι���(Ĭ�Ϲ���) �� �вι���
//  �������ͷ��� ��ͨ���캯�� �� �������캯��
class Person
{public :
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯���ĵ���" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯���ĵ���" << endl;
	}

	Person(const Person &p)//�������캯��
	{  //������������ϵ����ԣ�������������
		age = p.age;
		cout << "Person�Ŀ������캯���ĵ���" << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int age = 0;
};
//����
void test01()
{   //1.���ŷ�                         �Ƽ�ʹ�����ŷ�
	//Person p1;//Ĭ�Ϲ��캯���ĵ���
	//Person p2(10);//�вι��캯���ĵ���
	//Person p3(p2);//�������캯���ĵ���

	//cout << "p2������Ϊ��" << p2.age << endl;
	//cout << "p3������Ϊ��" << p3.age << endl;
	//ע������_1
	//����Ĭ�Ϻ���ʱ����Ҫ�ӣ���
	//��Ϊ�������д������������Ϊ��һ����������������һ���������ڲ�����д��һ����������������
	//������Ϊ�ڴ�������
	//Person p1();

	//2.��ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι��캯���ĵ���
	//Person p3 = Person(p2);//�������캯���ĵ���

	//Person(10);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ�������յ���������
	//cout << "aaa" << endl;
	//ע�������Ҫ���ÿ������캯����ʼ����������
	//����������ΪPerson (p3) == Person p3;�����ض���Ĵ���
	//Person(p3);

	//3.��ʽת����
	Person p2 = 10;//�൱��д�� Person p4  = Person(10);
	Person p3 = p2;//��������
}
int main()
{
	test01();
	system("pause");
	return 0;
}