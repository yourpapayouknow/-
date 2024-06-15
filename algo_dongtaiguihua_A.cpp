#include  <iostream>
using namespace std;
int a[100001];
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;++i)
            cin>>a[i];
        int num = 1;
        int last =a[0];
        for(int i=1;i<n;++i)
        {
            if(a[i]!=last)
            {
                num++;
                last = a[i];
            }
        }
        cout<<num<<endl;
    }
    return 0;
}