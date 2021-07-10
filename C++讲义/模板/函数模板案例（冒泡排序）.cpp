//函数模板案例
//案例描述：
//1.利用函数模板封装一个排序的函数，可以对不同的数据类型数组进行排序
//2.排序规则从小到大，排序算法为 选择排序 和 冒泡排序
//3.分别利用char数组 和 int数组进行测试

//冒泡排序
#include<iostream>
using namespace std;

template<typename T>
void mySwap(T &a ,T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

//冒泡排序模板
template<typename T>
//模板创建后要马上使用
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
	char charArr[] = "qweetrtey";//最后会自动添加一个空字符 \0
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