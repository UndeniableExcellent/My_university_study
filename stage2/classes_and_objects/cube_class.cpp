#include <iostream>
#include <string>
using namespace std;

// 设计立方体类(Cube)
// 求出立方体的面积和体积
// 分别用全局函数和成员函数判断两个立方体是否相等。
class Cube
{
private:
    int m_L;
    int m_W;
    int m_H;
public:
    void setL(int l)
    {
        m_L=l;
    }
    int getL()
    {
        return m_L;
    }
    void setW(int w)
    {
        m_W=w;
    }
    int getW()
    {
        return m_W;
    }
    void setH(int h)
    {
        m_H=h;
    }
    int getH()
    {
        return m_H;
    }

    int calculateS()
    {
        return 2*(m_L*m_W+m_L*m_H+m_W*m_H);
    }
    int calculateV()
    {
        return m_L*m_W*m_H;
    }

    bool isEqual(Cube &c)//只传一个函数即可,调用的立方体和另一个立方体
    {
        if(m_L==c.m_L&&m_W==c.m_W&&m_H==c.m_H)
            return true;
        else
            return false;
    }
};

bool isSame(Cube &c1,Cube &c2)//引用调用
{
    if(c1.getL()==c2.getL()&&c1.getW()==c2.getW()&&c1.getH()==c2.getH())
    {
        return true;
    }
    else
        return false;
}
int main()
{
    Cube c1,c2;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    cout<<"c1的面积为："<<c1.calculateS()<<endl;
    cout<<"c1的体积为："<<c1.calculateV()<<endl;
    if(isSame(c1,c2))
        cout<<"c1和c2相等"<<endl;
    if(c1.isEqual(c2))
    {
        cout<<"c1和c2相等"<<endl;
    }
    return 0;
}