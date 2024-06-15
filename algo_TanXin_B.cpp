#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int *innum=new int[n];
    for(int i=0;i<n;++i)
    {
        cin>>innum[i];
        innum[i]+=k;
    }
    sort(innum,innum+n);
    int flag=n;
    for(int i=0;i<n;++i)
    {
        if(innum[i]>5)
        {
            flag=i;
            break;
        }
    }
    cout<<flag/3<<endl;
}