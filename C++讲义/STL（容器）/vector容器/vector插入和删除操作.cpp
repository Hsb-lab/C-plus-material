//vector�����ɾ���Ĳ���
//������������vector�������в��롢ɾ������

//����ԭ�ͣ�
//1.push_back(ele);//β������Ԫ��ele
//2.pop_back();//ɾ�����һ��Ԫ��
//3.insert(const_iterator pos ,ele);//������ָ��λ��pos����Ԫ��ele
//4.insert(const_iterator pos,int count ,ele);//������ָ��λ��pos����count��Ԫ��ele
//5.erase(const_iterator pos);//ɾ��������ָ���Ԫ��
//6.erase(const_iterator start,const_iterator end);//ɾ����������start��end֮���Ԫ��
//7.clear();//ɾ������������Ԫ��

//�ܽ᣺
//β�� -- push_back
//βɾ -- pop_back
//���� -- insert(λ�õ�����)
//ɾ�� -- erase(λ�õ�����)
//��� -- clear

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
	//β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	//����
	printVector(v1);

	//βɾ
	v1.pop_back();
	printVector(v1);

	//����
	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(),2,1000);
	printVector(v1);

	//ɾ��
	v1.erase(v1.begin());
	printVector(v1);

	//���
	v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);

}

int main()
{
	test01();
}