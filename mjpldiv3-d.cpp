#include <iostream>
#include<cstdio>
#include<cstring>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        do
        {
            cout<<n;
            if(n!=0)
            {
                cout<<" ";
            }/* code */
        } while (n--&&n>0/* condition */);
    }
    else
    {
        cout<<-1;
    }
}