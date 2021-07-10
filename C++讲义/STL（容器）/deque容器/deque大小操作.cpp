//deque��С������dequeû������capacity�ĸ����һ��Ҫע�⣡��
//������������deque�����Ĵ�С���в���

//����ԭ�ͣ�
//deque.empty();//�ж������Ƿ�Ϊ��
//deque.size();//����������Ԫ�ظ���
//deque.resize(num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã�
                    //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//deque.resize(num);//����ָ�������ĳ���Ϊnum���������䳤������elem�����λ�ã�
                   //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

//�ܽ᣺
//1.dequeû�������ĸ���
//2.�ж��Ƿ�Ϊ�� -- empty
//3.����Ԫ�ظ��� -- size
//4.����ָ������ -- resize

#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>& d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int>d1;//û������capacity�ĸ���
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);
    if (d1.empty())
    {
        cout << "����Ϊ��" << endl;
    }
    else
    {
        cout << "������Ϊ��" << endl;
        cout << "�����Ĵ�СΪ��" << d1.size() << endl;
    }

    //����ָ����С
    d1.resize(15);
    printDeque(d1);

    d1.resize(15, 1);
    printDeque(d1);

    d1.resize(5);
    printDeque(d1);
}

int main()
{
    test01();
}