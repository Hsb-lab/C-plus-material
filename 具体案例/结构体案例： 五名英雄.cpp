//案例描述：
//设计一个英雄的结构体，包括成员姓名、年龄、性别；创建结构体数组，数组中存放5名英雄。
//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
#include <iostream>
using namespace std;
#include <string>
//1.设计英雄的结构体
struct Hero {
	string name;//姓名
	int age;//年龄
	string sex;//性别
};
//冒泡排序 实现年龄升序排列
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
//打印排序后数组的信息
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age << " 性别：" << heroArray[i].sex << endl;

	}
}
int main()
{//2.创建数组存放五名英雄(创建的变量为数组)
	struct Hero heroArray[5] =
	{   {"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);//len为数组长度
	
	//3.对数组进行升序排序，按照年龄进行升序排序
	bubbleSort(heroArray, len);
	printHero(heroArray, len);
}