#include <iostream>
using namespace std; 

class Rectangle 
{ 
 protected: 
    double length, width; 
 public: 
 Rectangle(double len, double wid):length(len),width(wid) 
 { }  
 virtual double Area() { return length*width; } 
};
// 在此处补充你的代码
class Cuboid:public Rectangle{
protected:
    double height;
public:
    Cuboid(double len, double wid, double hei):Rectangle(len, wid), height(hei){}
    double Area() { return 2*(length*width+width*height+height*length); }
};
class Cube:public Rectangle{
    protected:
    double side;
public:
    Cube(double len, double wid, double side):Rectangle(len, wid),side(side){}
    double Area()
    {
        if (side==1)
        {
            return length*length*6;/* code */  
        }
        else if(side==2)
        {
            return width*width*6;
        }
    }
};
int main() 
{ 
 Rectangle* rectArray[4];  
 rectArray[0] = new Rectangle(2,3); 
 rectArray[1]=new Cuboid(2,3,4); 
 rectArray[2] = new Cube(2,3,1); 
 rectArray[3] = new Cube(2,3,2);
 double areaSum=0.0; 
 for ( int i=0; i < 4; i++) 
 areaSum += rectArray[i]->Area(); 
 cout<< areaSum << endl; 
 for ( int i=0; i < 4; i++) 
 delete rectArray[i]; 
 return 0;
}