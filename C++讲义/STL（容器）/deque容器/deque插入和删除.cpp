//deque�����ɾ��
//������������deque�����в����ɾ������

//����ԭ�ͣ�
//���˲��������
//1.push_back(elem);//������β�����һ������
//2.push_front(elem);//������ͷ������һ������
//3.pop_back(elem);//ɾ�������һ������
//4.pop_front(elem);//ɾ��������һ������
//ָ��λ�ò�����
//1.insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
//2.insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��з���ֵ
//3.insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��з���ֵ
//4.clear();//��������е���������
//5.erase(beg , end);//ɾ��[beg,end)��������ݣ���������һ�����ݵ�λ��
//6.erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�

//�ܽ᣺
//1.�����ɾ���ṩ��λ���ǵ�������
//2.β�� -- push_back
//3.βɾ -- pop_back
//4.ͷ�� -- push_front

#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	//200 100 10 20
	//printDeque(d1);

	//βɾ
	d1.pop_back();

	//200 100 10 
	//printDeque(d1);

	//ͷɾ
	d1.pop_front();

	//100 10
	//printDeque(d1);

}

void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//200 100 10 20
	//printDeque(d1);

	//insert����
	deque<int>::iterator it01 =  d1.insert(d1.begin(), 2000);
	//printDeque(d1);
	cout << *it01 << endl;

	deque<int>::iterator it02 = d1.insert(d1.begin(), 2,20000);
	//printDeque(d1);
	cout << *it02 << endl;

	//����������в���
	deque<int>d2;
	d2.push_back(54);
	d2.push_back(2);
	d2.push_back(3);

	deque<int>::iterator it03 = d1.insert(d1.begin(), d2.begin(), d2.end());
	//printDeque(d1);
	cout << *it03 << endl;
}

void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//ɾ��
	//deque<int>::iterator it = d1.begin();
	//it++;
	//deque<int>::iterator it04 = d1.erase(it);
	//printDeque(d1);
	//cout << *it04 << endl;

	//��������ķ�ʽɾ��


	deque<int>::iterator it05  = d1.erase(d1.begin(), --d1.end());
	cout << *it05 << endl;
	//d1.clear();
	//printDeque(d1);
}

int main()
{
	//test01();
	//test02();
	test03();
}