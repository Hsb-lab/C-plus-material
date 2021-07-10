//��̬��������������װ
//����������
//������Ҫ��ɲ���ΪCPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
//��ÿ�������װ�������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel��Lenovo����
//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//����ʱ��װ��̨��ͬ�ĵ��Խ��й���
#include <iostream>
using namespace std;
//����ͬ�����
//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void caculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		 m_cpu = cpu;
		 m_vc = vc;
		m_mem = mem;
	}
	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->caculate();
		m_vc->display();
		m_mem->storage();
	}
	//�ṩ��������
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;//CPU�����ָ��
	VideoCard* m_vc;//�Կ����ָ��
	Memory* m_mem;//�ڴ������ָ��
};

//���峧��
//Intel����
class IntelCPU :public CPU
{
	virtual void caculate()
	{
		cout << "Intel��CPU��ʼ������" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Intel��VideoCard��ʼ��ʾ��" << endl;
	}
};
class IntelMemory :public Memory
{
	virtual void storage()
	{
		cout << "Intel��Memory��ʼ�洢��" << endl;
	}
};

//Lenovo����
class LenovoCPU :public CPU
{
	virtual void caculate()
	{
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo��VideoCard��ʼ��ʾ��" << endl;
	}
};
class LenovoMemory :public Memory
{
	virtual void storage()
	{
		cout << "Lenovo��Memory��ʼ�洢��" << endl;
	}
};

void test01()
{
	cout << "��һ̨���Կ�ʼ������" << endl;
	//��һ̨���Եĵ����
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelmem = new IntelMemory;

	//������һ̨����
	Computer* computer01 = new Computer(intelCpu, intelCard, intelmem);
	computer01->work();
	delete computer01;
	cout << "------------------------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	//�ڶ�̨������װ
	Computer* computer02 = new Computer(new LenovoCPU, new LenovoVideoCard,new LenovoMemory);
	computer02->work();
	delete computer02;

	cout << "------------------------------------------" << endl;
	cout << "����̨���Կ�ʼ������" << endl;
	//�ڶ�̨������װ
	Computer* computer03 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer03->work();
	delete computer03;
}
int main()
{
	test01();
}