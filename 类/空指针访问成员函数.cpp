//��ָ����ʳ�Ա����
//c++�п�ָ��Ҳ�ǿ��Ե��ó�Ա����������ҲҪע������û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
#include<iostream>
using namespace std;
class Person
{public :
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{  //����ԭ������Ϊ�����ָ����NULL ���൱���������У�
		if (this == NULL)//��ߴ���Ľ�׳��
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