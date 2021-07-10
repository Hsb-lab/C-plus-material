//list�����ɾ��
//������������list�����������ݵĲ����ɾ��

//����ԭ�ͣ�
//push_back(elem);//������β������һ��Ԫ��
//pop_back();//ɾ�����������һ��Ԫ��
//push_front(elem);//��������ͷ����һ��Ԫ��
//pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ��
//insert(pos,n,elem);//��posλ�ò���n��elem����
//insert(pos,beg,end);//��posλ�ò���[beg,end)���������
//clear();//�Ƴ������е���������
//erase(beg,end);//ɾ��[beg,end)���������
//erase(pos);//ɾ��posλ�õ�����
//remove(elem);//ɾ��������������elemֵƥ���Ԫ�أ���Ү������ֱ��д��Ԫ�أ�����ʹ�õ�������

//�ܽ᣺
//1.β�塪��push_back
//2.βɾ����pop_back
//3.ͷ�塪��push_front
//4.ͷɾ����pop_front
//5.���롪��insert
//6.ɾ������erase
//7.�Ƴ�����remove
//8.��ա���clear

#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L;

	//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	//ͷ��
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);

	//βɾ
	L.pop_back();
	printList(L);

	//ͷɾ
	L.pop_front();
	printList(L);

	//insert����
	list<int>::iterator it = L.begin();
	it++;
	L.insert(it, 1000);
	printList(L);

	//ɾ��
	it = L.begin();
	L.erase(++it);
	printList(L);

	//remove�Ƴ�
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);

	L.remove(10000);
	printList(L);

	//���
	L.clear();
	printList(L);
}

int main()
{
	test01();
}