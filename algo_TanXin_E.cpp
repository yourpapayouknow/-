#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int br[t];
    for(int i=0;i<t;++i)
    {
        int n,couo=0,couq=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;++j)
        {
            cin>>arr[j];
            if(arr[j]%2!=j%2)
            {
                if(arr[j]%2==0)
                    couo++;
                else
                    couq++;
            }
        }
        if(couo==couq)
            br[i]=couo;
        else
            br[i]=-1;
    }
    for(int i=0;i<t;++i)
    {
        cout<<br[i]<<endl;
    }
    return 0;
}