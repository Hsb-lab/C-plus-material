//����������
//���һ��Ӣ�۵Ľṹ�壬������Ա���������䡢�Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
//ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ��
#include <iostream>
using namespace std;
#include <string>
//1.���Ӣ�۵Ľṹ��
struct Hero {
	string name;//����
	int age;//����
	string sex;//�Ա�
};
//ð������ ʵ��������������
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
		}
	}
}

}
//��ӡ������������Ϣ
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�" << heroArray[i].sex << endl;

	}
}
int main()
{//2.��������������Ӣ��(�����ı���Ϊ����)
	struct Hero heroArray[5] =
	{   {"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);//lenΪ���鳤��
	
	//3.����������������򣬰������������������
	bubbleSort(heroArray, len);
	printHero(heroArray, len);
}