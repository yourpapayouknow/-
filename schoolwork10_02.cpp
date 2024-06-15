#include <iostream>
using namespace std;
class Calculate
{
    public:
    void add(double a,double b)
    {
        cout<<a+b<<endl;
    }
    void sub(double a,double b)
    {
        cout<<a-b<<endl;
    }
    void mul(double a,double b)
    {
        cout<<a*b<<endl;
    }
    void div(double a,double b)
    {
        cout<<a/b<<endl;
    }
};
int main()
{
    Calculate cal;
    double a,b;
    cin>>a>>b;
            cal.add(a,b);
            cal.sub(a,b);
            cal.mul(a,b);
            cal.div(a,b);
    return 0;
}