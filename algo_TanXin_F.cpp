#include <iostream>
#include <algorithm>
using namespace std;
struct show
{
    int start;
    int end;
};
bool cmp(show a,show b)
{
    return a.end<b.end;
}
show a[100];
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        for(int i=0;i<n;++i)
        {
            cin>>a[i].start>>a[i].end;
        }
        sort(a,a+n,cmp);
        int time=0;
        int end=0;
        for(int i=0;i<n;++i)
        {
            if(a[i].start>=end)
            {
                time++;
                end=a[i].end;
            }
        }
        cout<<time<<endl;
    }
    return 0;
}