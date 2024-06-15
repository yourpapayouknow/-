#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;++k)
    {
        int n;
        cin>>n;
        int a[2][n];
        long long sum=0;
        for(int i=0;i<2;++i)
        {
            for(int j=0;j<n;++j)
            {
                cin>>a[i][j];
            }
        }
        int min1=a[0][0];
        for(int i=0;i<n;++i)
        {
            if(a[0][i]<min1)
            {
                min1=a[0][i];
            }
        }
        int min2=a[1][0];
        for(int i=0;i<n;++i)
        {
            if(a[1][i]<min2)
            {
                min2=a[1][i];
            }
        }
        for(int i=0;i<n;++i)
        {
            a[0][i]-=min1;
            a[1][i]-=min2;
        }
        for(int i=0;i<n;++i)
        {
            sum+=max(a[0][i],a[1][i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}