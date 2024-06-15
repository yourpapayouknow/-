#include <iostream>
//#include <algorithm>
using namespace std;
int dp[12890]={0};
int main()
{
    int N,M;
    int w[3410];
    int v[3410];
    cin>>N>>M;
    for(int i=1;i<=N;++i)
        cin>>w[i]>>v[i];
    for(int i=1;i<=N;++i)
        for(int j=M;j>=1;--j)
            {
                if(j>=w[i])
                    dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
                else
                    dp[j]=dp[j];
            }
    cout<<dp[M]<<endl;
    return 0;
}