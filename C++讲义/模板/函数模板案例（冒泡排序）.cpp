//����ģ�尸��
//����������
//1.���ú���ģ���װһ������ĺ��������ԶԲ�ͬ���������������������
//2.��������С���������㷨Ϊ ѡ������ �� ð������
//3.�ֱ�����char���� �� int������в���

//ð������
#include<iostream>
using namespace std;

template<typename T>
void mySwap(T &a ,T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

//ð������ģ��
template<typename T>
//ģ�崴����Ҫ����ʹ��
void mySort(T Arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (Arr[j] > Arr[j + 1])
				mySwap(Arr[j], Arr[j + 1]);
		}
	}
}
template<typename T>
void printArray(T Arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArr[] = "qweetrtey";//�����Զ����һ�����ַ� \0
	int len_charArr = sizeof(charArr) / sizeof(char) - 1;
	mySort(charArr, len_charArr);
	printArray(charArr, len_charArr);

	int intArr[] = { 1,5,8,5,3,6,45,56 };
	int len_intArr = sizeof(intArr) / sizeof(int);
	mySort(intArr, len_intArr);
	printArray(intArr, len_intArr);
}


int main()
{
	test01();
}