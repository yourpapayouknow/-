#include <iostream>
using namespace std;
int main()
{
    int n,h,count,a;
    while(cin>>n>>h)
    {
        count = 0;
        for(int i=0;i<n;++i)
        {
            cin>>a;
            if(a>h)
                count+=2;
            else
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
