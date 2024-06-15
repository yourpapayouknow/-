#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int b[20],n,pd=0;
bool dfs(int a,int * b,int op,int n,int i)
{
    if(i==n)
    {
        if(a==0)
            return true;
        else
            return false;
    }
    if(op==1)
        a=(a+b[i])%360;
    else
        a=(a+360-b[i])%360;
    if(dfs(a,b,1,n,i+1))
        return 1;
    if(dfs(a,b,2,n,i+1))
        return 1;
    return 0;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>b[i];
    if(dfs(0,b,1,n,0))
        pd=1;
    else if (dfs(0,b,2,n,0))
    {
        pd=1;/* code */
    }
    if(pd==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
    
}