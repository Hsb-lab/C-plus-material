//deque������˫�˶��У�˫���У�
//deque�����Ļ�������
//���ܣ�˫�����飬���Զ�ͷ�˽��в����ɾ������

//deque��vector����
//1.vector����ͷ�������Ч�ʵͣ�������Խ��Ч��Խ��
//2.deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ��vector��
//3.vector����Ԫ��ʱ���ٶȻ��deque�죬������ߵ��ڲ�ʵ���й�

//deque�ڲ�����ԭ��
//deque�ڲ��и��п�����ά��ÿ���������е����ݣ��������д����ʵ����
//�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�

//deque�����ĵ�����Ҳ��֧��������ʵ�

//deque���캯��
//����������deque��������

//����ԭ�ͣ�
//1.deque<T>deqT;//Ĭ�Ϲ�����ʽ
//2.deque(beg,end);//���캯����[bed,end)�����е�Ԫ�ؿ���������
//3.deque(n,elem);//���캯����n��elem����������
//4.deque(const deque & deq);//�������캯��

//�ܽ᣺
//deque������vector�����Ĺ��췽ʽ����һ�£����ʹ�ü���

#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>& d)//const��ֹ�����
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;//�����е����ݲ������޸���
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2(d1.begin(),d1.end());
	printDeque(d2);

	deque<int>d3(10, 100);
	printDeque(d3);

	deque<int>d4(d3);
	printDeque(d4);
}

int main()
{
	test01();
}