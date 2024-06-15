#include <iostream>
using namespace std;
int main()
{
    int T[303],W[303];
    T[0]=0;
    for(int i=1;i<=301;++i)
        T[i]=T[i-1]+i;
    W[0]=0;
    for(int i=1;i<=300;++i)
        W[i]=W[i-1]+T[i+1]*i;
    int n,N;
    cin>>N;
    for(int i=1;i<=N;++i)
    {
        cin>>n;
        cout<<i<<" "<<n<<" "<<W[n]<<endl;
    }
    return 0;
}