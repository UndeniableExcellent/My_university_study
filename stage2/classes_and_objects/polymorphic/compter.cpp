#include <iostream>
using namespace std;

/*#### 4.7.6 多态案例三-电脑组装
**案例描述：**
电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）

将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商

创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口

测试时组装三台不同的电脑进行工作*/

class CPU
{
public:
    virtual void calculator() = 0;
};
class VideoCard
{
public:
    virtual void display() = 0;
};
class Memory
{
public:
    virtual void storage() = 0;
};
class Computer
{
public:
    Computer(CPU *cpu, VideoCard *videoCard, Memory *m) : m_cpu(cpu), m_vc(videoCard), m_mem(m) {}
    ~Computer()
    {
        if (m_cpu)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc)
        {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }
    void work()
    {
        m_cpu->calculator();
        m_vc->display();
        m_mem->storage();
    }

private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};

class IntelCPU : public CPU
{
public:
    virtual void calculator()
    {
        cout << "IntelCPU 计算中" << endl;
    }
};
class IntelVideoCard : public VideoCard
{
public:
    virtual void display()
    {
        cout << "IntelVideoCard 显示中" << endl;
    }
};
class IntelMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "IntelMemory 存储中" << endl;
    }
};
class LenovoCPU : public CPU
{
public:
    virtual void calculator()
    {
        cout << "LenovoCPU 计算中" << endl;
    }
};
class LenovoVideoCard : public VideoCard
{
public:
    virtual void display()
    {
        cout << "LenovoVideoCard 显示中" << endl;
    }
};
class LenovoMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "LenovoMemory 存储中" << endl;
    }
};
void test01()
{
    CPU *intelCPU = new IntelCPU;
    VideoCard *intelVC = new IntelVideoCard;
    Memory *intelMem = new IntelMemory;

    Computer *com1 = new Computer(intelCPU, intelVC, intelMem);
    com1->work();
    delete com1;
    com1 = NULL;

    // 第二台电脑
    CPU *lenovoCPU = new LenovoCPU;
    VideoCard *lenovoVC = new LenovoVideoCard;
    Memory *lenovoMem = new LenovoMemory;

    Computer *com2 = new Computer(lenovoCPU, lenovoVC, lenovoMem);
    com2->work();
    delete com2;
    com2 = NULL;
}

int main()
{
    test01();
    return 0;
}