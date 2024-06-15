// 在此处补充你的代码
#include <iostream>
#include <iomanip>
using namespace std;
class RMB
{
public:
    int yuan;
    int jiao;
    double d;
    RMB(int y=0,int j=0):yuan(y),jiao(j){};
    void display()
    {
        cout<<d<<endl;
    }
    RMB operator +=(RMB &x)
    {
        yuan += x.yuan;
        jiao += x.jiao;
        if(jiao>=100)
        {
            yuan++;
            jiao -= 100;
        }
        return *this;
    }
    RMB operator -=(RMB &x)
    {
        yuan -= x.yuan;
        jiao -= x.jiao;
        if(jiao<0)
        {
            yuan--;
            jiao += 100;
        }
        return *this;
    }
    double operator +=(double x)
    {
        d=yuan+jiao/100.0+x;
        yuan = (int)d;
        jiao = (d-yuan)*100;
        return d;
    }
    double operator -=(double x)
    {
        d=yuan+jiao/100.0-x;
        yuan = (int)d;
        jiao = (d-yuan)*100;
        return d;
    }
};
int main()
{
	RMB d1(1,60);
	RMB d2(2,50);
	RMB d3;
	double db;
	cin>>db;
	d3 += d2; 
	d3 += db; d3.display();
	d3 -= d1; 
	d3 -= db; d3.display(); 
	return 0;
}