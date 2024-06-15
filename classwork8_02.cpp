#include <iostream>
using namespace std;
class Account
{
public:
    virtual void deposit()=0;
    virtual void withdraw()=0;
    virtual void print()=0;
};
class Saving:public Account
{

};
class Checking:public Account
{

};
int main()
{
    int acnum;
    cin>>acnum;
    while(acnum--)
    {
        char type;
        int ac,mon;
        cin>>type>>ac>>mon;
        cout<<ac<<" "<<mon<<endl;
    }
    return 0;
}