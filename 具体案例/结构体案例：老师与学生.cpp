//结构体案例1
//案例描述：学校正在做毕设项目，每名老师带领五名学生，总共有三名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放五名学生的数组作为成员
//学生有姓名、考试分数，创建数组存放三名老师，通过函数给每个老师及所带的学生赋值
//最终打印出老师数据以及老师所带学生的数据
#include <iostream>
#include <string>
#include<ctime>
using namespace std;
//学生的结构体定义
struct student {//学生结构体的定义
    string sName;  int score;

};

//老师结构体的定义
struct teacher {
    string tName;//姓名
    struct student stuarray[5];//学生结构体变量的创建
};
void allocatespace(struct teacher tArray[],int len)
{
    string nameseed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameseed[i];
        for (int j = 0; j < 5; j++)
        {
            tArray[i].stuarray[j].sName = "Student_";
            tArray[i].stuarray[j].sName += nameseed[j];
            int random = rand() % 61 + 40;
            tArray[i].stuarray[j].score = random;
        }
    }

}
void printInfro(struct teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名：" << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生姓名：" << tArray[i].stuarray[j].sName << " 考试分数：" << tArray[i].stuarray[j].score << endl;

        }

    }


}

int main()
{//随机数种子
    srand((unsigned int)time(NULL));
    //1.创建三名老师的数组
    struct teacher tArray[3];
    int len = sizeof(tArray) / sizeof(tArray[0]);
//2.通过函数给三名老师的信息赋值，并给老师带的学生的信息赋值
    allocatespace(tArray, len);                
//3.打印所有老师及所带学生的信息
    printInfro(tArray, len);
}