#include <iostream>
using namespace std;
int main()
{
    int t,n,a,count,max;
    cin>>t;
    while(t--)
    {
        count =0;
        max=0;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>a;
            if(a==0)
            {
                count++;
            }
            else
            {
                if(count>max)
                {
                    max= count;
                }
                count =0;

            }
        }
        if(count>max)
        {
            max = count;
        }
        cout<<max<<endl;
    }
    return 0;
}