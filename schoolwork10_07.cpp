#include<iostream>
using namespace std;

class RMB{
public:
  RMB(unsigned int d, unsigned int c);
  RMB operator+(RMB&);
  void display(){ cout<<(yuan + jf / 100.0)<<endl; }
protected:
  unsigned int yuan;
  unsigned int jf;
};

RMB::RMB(unsigned int d, unsigned int c)
{
  yuan = d + c/100;
  jf = c % 100;
}

// 在此处补充你的代码
RMB RMB::operator+(RMB& d)
{
  unsigned int d1 = yuan * 100 + jf;
  unsigned int d2 = d.yuan * 100 + d.jf;
  return RMB(0, d1 + d2);
}
int main()
{
  RMB d1(1, 50);
  RMB d2(2, 80);
  RMB d3(0, 0);
  d3 = d1 + d2;
  d3.display();
}