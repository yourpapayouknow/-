#include <iostream>
#include <cmath>
using namespace std;
 
class Point
{
    public:
    double x,y;
    void set()
    {
        cin>>x>>y;
    }
    void show()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    friend double distance(Point p1,Point p2);
};
double distance(Point p1,Point p2)
{
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
int main()
{
    Point P1,P2;
    P1.set();
    P2.set();
    P1.show();
    P2.show();
    cout<<"Distance="<<distance(P1,P2)<<endl;
    return 0;
}