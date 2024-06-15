#include <iostream>
using namespace std;
int c[20];
int main()
{
    int n,l,r,x;
    while(cin>>n>>l>>r>>x)
    {
        for(int i=0;i<n;++i)
        {
            cin>>c[i];
        }
        int ans=0;
        for(int i=0;i<(1<<n);++i)
        {
            int k=0;
            int sum=0;
            int num =0;
            int minn=10e6;
            int maxx=0;
            while(k<n)
            {
                if(i&(1<<k))
                {
                    sum+=c[k];
                    num++;
                    if(c[k]>maxx)
                        maxx=c[k];
                    if(c[k]<minn)
                        minn=c[k];

                }
                k++;
            }
            if(sum>=l&&sum<=r&&maxx-minn>=x&&num>=2)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}