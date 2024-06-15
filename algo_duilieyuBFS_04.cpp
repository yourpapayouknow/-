#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> last(26,-1);
        bool fact = false;
        for(int i=0;i<n;++i)
        {
            int idx = s[i]- 'A';
            if(last[idx]!=-1&&i-last[idx]>1)
            {
                fact = true;
                break;
            }
            last[idx]=i;
        }
        if(fact)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}