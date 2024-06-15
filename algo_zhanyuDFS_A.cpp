#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int flag=0;
        cin>>n;
        int * a=new int[n+1];
        for(int i=0;i<n;++i)
            cin>>a[i];
        sort(a,a+n);
        a[n]=a[n-1]+1;
        int * dis=new int[n+1];
        for(int i=0;i<n;++i)
            {
                dis[i]=a[i+1]-a[i];
                if(dis[i]>1)
                    {
                        flag=1;
                        cout<<"NO"<<endl;
                        break;
                    }
            }
        if(flag==0)
            cout<<"YES"<<endl;
        delete [] a;
        delete [] dis;
    }
    return 0;
}