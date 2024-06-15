#include <iostream>
using namespace std;
int main()
{
    int a[5]={100,20,10,5,1};
    int n;
    while(cin>>n)
    {
        int count = 0;
        int k=0;
        while(n)
        {
            count+=n/a[k];
            n%=a[k];
            k++;
        }
        cout<<count<<endl;
    }
    return 0;
}