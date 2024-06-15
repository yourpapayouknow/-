#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"NO"<<endl;
    else
    {
        long long p[1000];
        p[0]=b;
        int i=1;
        while(b>a)
        {
            if(b%2==0)
                b/=2;
            else if(b%10==1)
                b=(b-1)/10;
            else
                break;
            p[i]=b;
            i++;
        }
        if(b==a)
        {
            cout<<"YES"<<endl;
            cout<<i<<endl;
            for(int j=i-1;j>=0;--j)
                cout<<p[j]<<" ";
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}