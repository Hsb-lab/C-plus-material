//vector�����ʹ�С
//����������
//��vector�����������ʹ�С����

//����ԭ�ͣ�
//empty();//�ж������Ƿ�Ϊ��
//capacity();//����������
//size();//����������Ԫ�صĸ���        ����>=������С
//resize(int num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã�Ĭ�����0��
                  //���������̣���ĩβ������������Ԫ�ر�ɾ��
//resize(int num��int elem);//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
                  //���������̣���ĩβ������������Ԫ�ر�ɾ��

//�ܽ᣺
//1.�ж��Ƿ�Ϊ�� -- empty
//2.����Ԫ�ظ��� -- size
//3.������������ -- capacity
//4.����ָ����С -- resize

#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>& v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())//Ϊ�շ���1�����򷵻�0
    {
        cout << "����Ϊ��" << endl;
    }
    else
    {
        cout << "������Ϊ��" << endl;
        cout << "����������Ϊ��" << v1.capacity() << endl;
        cout << "�����Ĵ�СΪ��" << v1.size() << endl;
    }

    //����ָ����С
    v1.resize(15 ,100);
    printVector(v1);
    
    v1.resize(5);
    printVector(v1);//�������ָ���ı�ԭ�����ˣ������Ĳ��ֻᱻɾ��
}

int main()
{
    test01();
}