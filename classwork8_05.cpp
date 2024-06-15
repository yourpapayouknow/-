#include<iostream>
using namespace std;
// 在此处补充你的代码
class Shape
{
public:
    virtual float area()=0;
};
class Rectangle:public Shape
{
public:
    float w,h;
    Rectangle(float w,float h):w(w),h(h){}
    float area()
    {
        return w*h;
    }
};
class Circle:public Shape
{
public:
    float r;
    Circle(float r):r(r){}
    float area()
    {
        return 3.14*r*r;
    }
};
int main()
{
	float w,h,r;
	cin>>w>>h>>r;
	Rectangle r1(w,h);
	Circle c1(r);
	cout<<r1.area()<<endl;
	cout<<c1.area();
	return 0;
}