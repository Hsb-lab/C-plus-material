//��ϰ�������˷��ھ���
//����������
//����Ƕ��ѭ����ʵ�־žų˷���
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
			//if (j == i) cout << endl;//Ҳ�������ж�����ж��Ƿ���
		}
		cout << endl;
	}

}