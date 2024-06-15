#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int l,r;
    int a[10];
    while(cin>>l>>r)
    {
        int temp,flag;
        for(int i=l;i<=r;++i)
      {  
        memset(a,0,sizeof(a));
        temp=i;flag=1;
        while(temp && flag)
        {
            if(a[temp%10])
            {
                flag=0;
                break;
            }
            a[temp%10]++;
            temp/=10;
        }
        if(flag)
            {cout<<i<<endl;
            break;}
        
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }
    } 
    return 0;
}