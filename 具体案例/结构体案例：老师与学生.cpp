//�ṹ�尸��1
//����������ѧУ������������Ŀ��ÿ����ʦ��������ѧ�����ܹ���������ʦ����������
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ���������ѧ����������Ϊ��Ա
//ѧ�������������Է���������������������ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//���մ�ӡ����ʦ�����Լ���ʦ����ѧ��������
#include <iostream>
#include <string>
#include<ctime>
using namespace std;
//ѧ���Ľṹ�嶨��
struct student {//ѧ���ṹ��Ķ���
    string sName;  int score;

};

//��ʦ�ṹ��Ķ���
struct teacher {
    string tName;//����
    struct student stuarray[5];//ѧ���ṹ������Ĵ���
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
        cout << "��ʦ������" << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\tѧ��������" << tArray[i].stuarray[j].sName << " ���Է�����" << tArray[i].stuarray[j].score << endl;

        }

    }


}

int main()
{//���������
    srand((unsigned int)time(NULL));
    //1.����������ʦ������
    struct teacher tArray[3];
    int len = sizeof(tArray) / sizeof(tArray[0]);
//2.ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ������Ϣ��ֵ
    allocatespace(tArray, len);                
//3.��ӡ������ʦ������ѧ������Ϣ
    printInfro(tArray, len);
}