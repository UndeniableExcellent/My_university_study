#include <iostream>
using namespace std;

class Point
{
public:
    void setX(int x) { m_X = x; };
    void setY(int y) { m_Y = y; };
    int getX() { return m_X; };
    int getY() { return m_Y; };
private:
    int m_X;
    int m_Y;
};

class Circle
{
public:
    void setR(int r) { m_R = r; };
    int getR() { return m_R; };
    void setCenter(Point center) { m_center = center; };
    Point getCenter() { return m_center; };
private:
    int m_R;
    Point m_center;//在类中可以让另一个类作为本类的成员
};

void isInCircle(Circle c, Point p)
{
    //计算两点之间的距离平方
    int distance = (p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) + (p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
    //计算半径的平方
    int rDistance = c.getR() * c.getR();
    if (distance == rDistance)
    cout<<"点在圆上"<<endl;
    else if (distance < rDistance)
    {
        cout<<"点在圆内"<<endl;
    }
    else
    {
        cout<<"点在圆外"<<endl;
    }
}
int main()
{
    Circle c;
    Point p;
    c.setR(10); //设置圆的半径为5
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center); //设置圆心为(10,0)
    p.setX(10);
    p.setY(10);
    isInCircle(c,p);
    return 0;
}
