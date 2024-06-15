#include <iostream>
#include <algorithm>
using namespace std;
int subSetJudge(int * coin,int n,int seq, int s)
{
    int spendNum =0;
    int money =0;
    int minCoin =0;
    bool firstflag = true;
    for(int i=0; i<n ;i++)
    {
        if(seq & (1<<i))
        {
            money += coin[i];
            spendNum++;
            if(firstflag)
                minCoin = coin[i];
            firstflag = false;
            
        }
    }
    if(money>=s && money-minCoin<s)
        return spendNum;
    else
        return -1;
}
int main()
{
    int t ,n ,s;
    int coin[15];
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(int i=0;i<n;++i)
        {
            cin>>coin[i];
        }
        sort(coin,coin+n);
        int length = 1<<n;
        int maxNum = -1;
        int temp;
        for(int i=0;i<length;++i)
        {
            temp = subSetJudge(coin,n,i,s);
            if(temp>maxNum)
                maxNum = temp;
        }
        cout<<maxNum<<endl;
    }
    return 0;
}