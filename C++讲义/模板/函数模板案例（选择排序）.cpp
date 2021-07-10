//函数模板案例
//案例描述：
//1.利用函数模板封装一个排序的函数，可以对不同的数据类型数组进行排序
//2.排序规则从小到大，排序算法为 选择排序 和 冒泡排序
//3.分别利用char数组 和 int数组进行测试

//选择排序

#include<iostream>
using namespace std;

template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//选择排序模板
template<typename T>
void mySort(T Arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (Arr[max] < Arr[j])  max = j;//更新下标
		}
		if (max != i)
		{
			//交换两个元素
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
	char charArr[] = "fedfhsdfgnsfghb";//最后会自动添加空字符 \0
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