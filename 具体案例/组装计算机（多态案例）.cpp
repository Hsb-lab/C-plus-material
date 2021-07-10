//多态案例三：电脑组装
//案例描述：
//电脑组要组成部件为CPU（用于计算），显卡（用于显示），内存条（用于存储）
//将每个零件封装出抽象类，并且提供不同的厂商生产不同的零件，例如Intel和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作
#include <iostream>
using namespace std;
//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void caculate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		 m_cpu = cpu;
		 m_vc = vc;
		m_mem = mem;
	}
	//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->caculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数
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
	CPU* m_cpu;//CPU的零件指针
	VideoCard* m_vc;//显卡零件指针
	Memory* m_mem;//内存条零件指针
};

//具体厂商
//Intel厂商
class IntelCPU :public CPU
{
	virtual void caculate()
	{
		cout << "Intel的CPU开始计算了" << endl;
	}
};
class IntelVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Intel的VideoCard开始显示了" << endl;
	}
};
class IntelMemory :public Memory
{
	virtual void storage()
	{
		cout << "Intel的Memory开始存储了" << endl;
	}
};

//Lenovo厂商
class LenovoCPU :public CPU
{
	virtual void caculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo的VideoCard开始显示了" << endl;
	}
};
class LenovoMemory :public Memory
{
	virtual void storage()
	{
		cout << "Lenovo的Memory开始存储了" << endl;
	}
};

void test01()
{
	cout << "第一台电脑开始工作：" << endl;
	//第一台电脑的的零件
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelmem = new IntelMemory;

	//创建第一台电脑
	Computer* computer01 = new Computer(intelCpu, intelCard, intelmem);
	computer01->work();
	delete computer01;
	cout << "------------------------------------------" << endl;
	cout << "第二台电脑开始工作：" << endl;
	//第二台电脑组装
	Computer* computer02 = new Computer(new LenovoCPU, new LenovoVideoCard,new LenovoMemory);
	computer02->work();
	delete computer02;

	cout << "------------------------------------------" << endl;
	cout << "第三台电脑开始工作：" << endl;
	//第二台电脑组装
	Computer* computer03 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer03->work();
	delete computer03;
}
int main()
{
	test01();
}