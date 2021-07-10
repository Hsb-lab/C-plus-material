//vector����
//vector��������
//���ܣ�vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������

//vector����ͨ��������
//��֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ

//��̬��չ��
//��������ԭ�ռ�֮�������¿ռ䣬����Ѱ�Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ������¿ռ䣬�ͷ�ԭ�ռ�

//front()  back()  push_back()  pop_back()  insert()
//v.begin()  v.end()  v.rbegin()��ָ������һ��Ԫ�أ�  v.rend()��ָ���һ��Ԫ�ص�ǰһ��λ�ã� 
//vector�����ĵ�������֧��������ʵĵ�����

//vector���캯��
//��������������vector����
//����ԭ�ͣ�
//1.vector<T>v;//����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//2.vector(v.begin(),v.end());//��[v.begin(),v.end())�����е�Ԫ�ؿ���������ע�������ұգ�
//3.vector(n,elem);//���캯����n��elem����������
//4.vector(const vector &vec);//�������캯��

//�ܽ᣺
//vector�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü���

#include<iostream>
using namespace std;
#include<vector>

void printVector( const vector<int> & v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//ͨ�����䷽ʽ���й���
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	//n��elem��ʽ����
	vector<int>v3(10, 100);//��һ�������Ǹ������ڶ��������Ǹ�ֵ
	printVector(v3);

	//��������
	vector<int>v4(v3);
	printVector(v4);
}

int main()
{
	test01();
}