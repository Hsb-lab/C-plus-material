//set�����ɾ��
//����������set�������в������ݺ�ɾ������

//����ԭ�ͣ�
//1.insert(elem);//�������в���Ԫ��
//2.clear();//�������Ԫ��
//3.erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//4.erase(beg,end);//ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//5.erase(elem);//ɾ��������ֵΪelem��Ԫ��
//��list��������remove�Ĳ�����

//�ܽ᣺
//1.���롪��insert
//2.ɾ������erase
//3.��ա���clear

#include<iostream>
using namespace std;
#include<set>

void PrintSet(set<int>s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;

	//����
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	//����
	PrintSet(s1);

	//ɾ��
	s1.erase(s1.begin());
	PrintSet(s1);

	//ɾ�����ذ汾
	s1.erase(30);
	PrintSet(s1);

	//���
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	PrintSet(s1);
}

int main()
{
	test01();
}