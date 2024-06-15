#include <iostream>
using namespace std;
int main()
{
    int t, x , a[4];
    cin>>t;
    while(t--)
    {
        cin>>x;
        cin>>a[1]>>a[2]>>a[3];
        if(a[x]==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(a[a[x]]==0)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}