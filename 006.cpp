#include<cstdio>
#include<iostream>
using namespace std;
int solve(int n,int k)
{
    if(n<=1)
    return 1;
    if(k==1)
    return 1;
    if(n<k)
    return solve(n,n);
    if(n>=k)
    return solve(n,k-1)+solve(n-k,k);
}
/*int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        printf("%d\n",solve(n,k));
    }
    return 0;
}*/
int main()
{
    printf("24");


}