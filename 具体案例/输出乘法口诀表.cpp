//练习案例：乘法口诀表
//案例描述：
//利用嵌套循环，实现九九乘法表
#include<iostream>
using namespace std;
int main()
{
	int len = 9;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "="<<j*i<<"\t";
			//if (j == i) cout << endl;//也可以用判断语句判断是否换行
		}
		cout << endl;
	}

}