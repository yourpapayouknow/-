#include<iostream>
#include <string>
using namespace std;
//---------------------
class Complex
{  
private:
    double real,imag; 
public:
    Complex(){  real=imag=0;  }
    Complex(double r){  real=r;imag=0;  }
    Complex(double r,double i){  real=r;imag=i;  }
// 在此处补充你的代码
    friend ostream & operator<<(ostream & os,const Complex & c)
    {
        if(c.imag!=0)
        {
            if(c.imag>0)
                os<<c.real<<'+'<<c.imag<<'j'<<endl;
            else if(c.imag<0)
                os<<c.real<<c.imag<<'j'<<endl;
        }
        else
        os<<c.real<<endl;
        return os;
    }
    friend istream & operator>>(istream & is,Complex & c)
    {
        char ch=',';
        is>>c.real>>ch>>c.imag;
        return is;
    }
};
int main()
{   Complex c;
cin>>c;
cout<<c;
}