//ͨѶ¼����ϵͳ
//һ��ϵͳ����
//ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ���
//���̳���Ҫ����C++��ʵ��һ��ͨѶ����ϵͳ
//ϵͳ����Ҫʵ�ֵĹ������£�
//1.�����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
//2.��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
//3.ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
//4.������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
//5.�޸���ϵ�ˣ��������������޸�ָ����ϵ��
//6.�����ϵ�ˣ����ͨѶ¼��������Ϣ
//7.�˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼

//����������Ŀ
//������Ŀ��������
//1.��������Ŀ
//2.����ļ�

//�����˵�����
//�����������û�ѡ��Ľ���
//���裺
//1.��װ������ʾ�ý��� �� void showMenu()
//2.��main�����е��÷�װ�õĺ���

//�ġ��˳�����
//�����������˳�ͨѶ¼ϵͳ
//˼·�������û���ͬ��ѡ�񣬽��벻ͬ�Ĺ��ܣ�����ѡ��switch��֧�ṹ���������ܹ����д
//���û�ѡ��0ʱ��ִ���˳���ѡ�������Ȳ���������Ҳ�����˳�����

//�塢�����ϵ��
//����������
//ʵ�������ϵ�˹��ܣ���ϵ������Ϊ1000�ˣ���ϵ����Ϣ�������������Ա���ϵ�绰����ͥסַ��
//�����ϵ��ʵ�ֲ��裺
//1.�����ϵ�˽ṹ��
//2.���ͨѶ¼�ṹ��
//3.main�����д���ͨѶ¼
//4.��װ�����ϵ�˺���
//5.���������ϵ�˹���

//������ʾ��ϵ��
//����������
//��ʾͨѶ¼�����е���ϵ����Ϣ
//��ʾ��ϵ�˲��裺
//1.��װ��ʾ��ϵ�˺���
//2.������ʾ��ϵ�˹���

//�ߡ�ɾ����ϵ��
//����������
//������������ɾ��ָ����ϵ��
//ɾ����ϵ�˲��裺
//1.��װ�����ϵ���Ƿ����
//2.��װɾ����ϵ�˺���
//3.����ɾ����ϵ�˹���

//�ˡ�������ϵ��
//�������������������鿴ָ����ϵ����Ϣ
//������ϵ��ʵ�ֲ��裺
//1.��װ������ϵ�˺���
//2.���Բ���ָ����ϵ��

//�š��޸���ϵ��
//�����������������������޸�ָ����ϵ��
//�޸���ϵ��ʵ�ֲ��裺
//1.��װ�޸���ϵ�˺���
//2.�����޸���ϵ�˺���

//ʮ�������ϵ��
//�������������ͨѶ¼��������Ϣ
//�����ϵ��ʵ�ֲ��裺
//1.��װ�����ϵ�˺���
//2.���������ϵ��
//ʵ��˼·����ͨѶ¼������ϵ����Ϣ�����ֻҪ��ͨѶ¼��¼����ϵ��������Ϊ0�����߼���ռ���
#include <iostream>
#include<string>
#define MAX 1000
using namespace std;
//�����ϵ�˵Ľṹ��
struct Person
{
	string m_Name;//����
	int m_Sex;//�Ա� �� 1 ��  2 Ů
	int m_Age;//����
	string m_Phone;//�绰
	string m_Addr;//סַ
};
//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1.�����ϵ��
void addPerson(Addressbooks *abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ������ϵ��
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
	    cout << "2---Ů" << endl;
		int sex = 0;
		while (true)
		{
			//�������1��2�������˳�ѭ��
			//�������������ô��������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		
		//�绰
		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼�е�����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		system("pause");//�밴���������
		system("cls");//��������
	}
}

//2.��ʾ������ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)  cout << "��ǰ��¼Ϊ��" << endl;
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name <<"\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1? "��":"Ů" ) << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr<< endl;
		}
	}
	system("pause");//�����������
	system("cls");//��������
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
int isExist(Addressbooks *abs,string name)//����1--ͨѶ¼   ����2--�Ա�����
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)//�ҵ��û����������
		{
			return i;//����0Ҳ���ԣ���Ϊ������㿪ʼ����
		}
	}
	return -1;
}
//3.ɾ��ָ����ϵ��
void deletePerson(Addressbooks * abs)
{
	cout << "������Ҫɾ������ϵ������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	//ret = -1δ�鵽
	//ret!= -1�鵽��
	if (ret == -1)
	{
		cout << "���޴���" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		//���ҵ���ϵ�ˣ�Ҫ����ɾ������
		//�ú������ϵ�����ݸ���Ҫɾ������ϵ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����Ǩ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е�����
		cout << "ɾ���ɹ�" << endl;
		system("pause");
		system("cls");
	}
}

//4.����ָ����ϵ����Ϣ
void findPerson(Addressbooks* abs)
{
	cout << "������Ҫ���ҵ���ϵ������" << endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].m_Name <<"\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex? "��":"Ů")<< "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else//δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
		
	}
	system("pause");
	system("cls");
}

//5.�޸�ָ������ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true)
		{
			//�������1��2�������˳�ѭ��
			//�������������ô��������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//�绰
		cout << "��������ϵ�绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
		
	}
	else//δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}
	//�������������
	system("pause");
	system("cls");
}

//6.���������ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
	cout << "ͨѶ¼�����" << endl;
	//�������������
	system("pause");
	system("cls");
}

//�˵�����
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

int main()
{   
	//����ͨѶ¼�Ľṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ����
	abs.m_Size = 0;
	int select = 0;//�����û�ѡ������ı���
	
	while (true)
	{
		//�˵�����
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1.�����ϵ��
			addPerson(&abs);//���õ�ַ���ݿ����޸�ʵ��
			break;
		case 2://2.��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3.ɾ����ϵ��
		//{	cout << "������ɾ����ϵ������" << endl;
		//string name;
		//cin >> name;
		//if (isExist(&abs, name) == -1)  cout << "���޴���" << endl;
		//else
		//{
		//	cout << "�ҵ�����" << endl;
		//}
		//}
			deletePerson(&abs);
			break;
		case 4://4.������ϵ��
			findPerson(&abs);
			break;
		case 5://5.�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6.�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://7.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:break;
		}
	}
	system("pause");
	return 0;
}