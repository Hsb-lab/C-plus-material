//����ģ�尸��
//����������
//1.���ú���ģ���װһ������ĺ��������ԶԲ�ͬ���������������������
//2.��������С���������㷨Ϊ ѡ������ �� ð������
//3.�ֱ�����char���� �� int������в���

//ѡ������

#include<iostream>
using namespace std;

template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//ѡ������ģ��
template<typename T>
void mySort(T Arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (Arr[max] < Arr[j])  max = j;//�����±�
		}
		if (max != i)
		{
			//��������Ԫ��
			mySwap(Arr[max], Arr[i]);
		}
	}
}

template<typename T>
void printArr(T Arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}


void test01()
{
	char charArr[] = "fedfhsdfgnsfghb";//�����Զ���ӿ��ַ� \0
	int len_charArr = sizeof(charArr) / sizeof(char) - 1;
	mySort(charArr, len_charArr);
	printArr(charArr, len_charArr);

	int intArr[] = { 1,2,5,5,87,2,8,2,54,0,45 };
	int len_intArr = sizeof(intArr) / sizeof(int);
	mySort(intArr, len_intArr);
	printArr(intArr, len_intArr);
}

int main()
{
	test01();
}