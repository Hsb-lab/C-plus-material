//��̬����
//����������
//�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������

//��̬���ŵ�
//1.������֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ��ڵ���չ�Լ�ά��
#include <iostream>
#include <string>
using namespace std;
//�ֱ�������ͨд�� �� ��̬����ʵ�ּ�����
//��ͨд��
class Caculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")  return m_1 + m_2;
		if (oper == "-")  return m_1 - m_2;
		if (oper == "*")  return m_1 * m_2;
		//�������չ�¹��ܣ���Ҫ�޸�Դ��
		//����ʵ�Ŀ����� �ᳫ ����ԭ��
		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
	}

	int m_1;//������1
	int m_2;//������2
};
void test01()
{
	//��������������
	Caculator c;
	c.m_1 = 10; c.m_2 = 10;
	cout << c.m_1 << " + " << c.m_2 << " = " << c.getResult("+") << endl;
	cout << c.m_1 << " - " << c.m_2 << " = " << c.getResult("-") << endl;
	cout << c.m_1 << " * " << c.m_2 << " = " << c.getResult("*") << endl;
}
//���ö�̬ʵ�ּ�����
//��̬�ô���
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ�����չ�Լ�ά���Ը�

//ʵ�ּ�����������
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};
//�ӷ���������
class AddCaculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 + m_num2;
	}
};
//������������
class SubCaculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 - m_num2;
	}
};
//�˷���������
class MulCaculator :public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_num1 * m_num2;
	}
};
void test02()
{
	//��̬ʹ������������ָ���������ָ���������

	//�ӷ�����
	AbstractCalculator* abc = new AddCaculator;
	abc->m_num1 = 100; abc->m_num2 = 100;
	cout << abc->m_num1 << " + " << abc->m_num2 <<" = "<<abc->getResult()<< endl;
	//�����ǵ�����
	delete abc;
	//���ٵ��Ƕ��������ݣ�ָ�������û�б䣬ָ��Ҳ�������ڣ���ָ�룩

	//��������
	abc = new SubCaculator;
	abc->m_num1 = 100; abc->m_num2 = 100;
	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
	delete abc;

	//�˷�����
	abc = new MulCaculator;
	abc->m_num1 = 100; abc->m_num2 = 100;
	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
	delete abc;
}
int main()
{
	//test01();
	test02();
}