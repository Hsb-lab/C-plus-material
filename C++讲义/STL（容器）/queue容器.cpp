//queue����
//queue��������
//���queue��һ���Ƚ��ȳ������ݽṹ��������������

//push() pop() / front() back()
//��ͷ/��β

//�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
//������ֻ�ж�ͷ�Ͷ�β�ſ��Ա������ʣ���˶��в������б�����Ϊ
//�����н����ݳ�Ϊ�������push
//�����г����ݳ�Ϊ��������pop
//�ж϶����Ƿ�Ϊ�ա���empty
//���ض��д�С����size

//queue���ýӿ�
//����������ջ�������õĶ���ӿ�

//���캯����
//queue<T>que;//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const queue &que);//�������캯��

//��ֵ������
//queue &operator=(const queue &que);//���صȺ������

//���ݴ�ȡ��
//push(elem);//����β���Ԫ��
//pop();//�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back();//�������һ��Ԫ��
//front();//���ص�һ��Ԫ��

//��С������
//empty();//�ж϶�ջ�Ƿ�Ϊ��
//size();//����ջ�Ĵ�С

//�ܽ᣺
//��ӡ���push
//���ӡ���pop
//���ض�ͷԪ�ء���front
//���ض�βԪ�ء���back
//�ж϶��Ƿ�Ϊ�ա���empty
//���ض��д�С����size

#include<iostream>
using namespace std;
#include<queue>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	//��������
	queue<Person>q;

	//׼������
	Person p1("��ɮ",30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout <<"���д�СΪ��"<<q.size() << endl;
	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β������
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷԪ�ء���������" << q.front().m_Name << " ���䣺" << q.front().m_Age << endl;

		//�鿴��β
		cout << "��βԪ�ء���������" << q.back().m_Name << " ���䣺" << q.back().m_Age << endl;

		q.pop();
	}
	cout << "���д�СΪ��" << q.size() << endl;
}

int main()
{
	test01();
}