#include <iostream>
#include<cstdio>
#include<cstring>
#include <algorithm>
#include<string>
using namespace std;
void turn(int num1,int num2)
{
    int contract=num1-num2;
    if(contract<0)
    {
        if((-contract)%2!=0)
        {
            //num1+=(-contract)-1;
            cout<<1<<endl;
        }
        else
        {    
            cout<<2<<endl;
        }
    }
    else if(contract==0)
    {
        cout<<0<<endl;
    }
    else
    {
        if(contract%2!=0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        turn(a,b);
    } 
}