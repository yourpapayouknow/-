#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> candy(n),apple(n);
        long long result=0;
        for(int i=0;i<n;++i)
        {
            cin>>candy[i];
        }
        for(int i=0;i<n;++i)
        {
            cin>>apple[i];
        }
        int min1=*min_element(candy.begin(),candy.end());
        int min2=*min_element(apple.begin(),apple.end());
        int resmin=min(min1,min2);
        for(int i=0;i<n;++i)
        {
            if(i!=distance(candy.begin(),min_element(candy.begin(),candy.end()))&&i!=distance(apple.begin(),min_element(apple.begin(),apple.end())))
                {
                    int diff1=candy[i]-min1,diff2=apple[i]-min2;int diff=min(diff1,diff2);
                    result+=diff;
                    result+=(candy[i]-diff-min1)+(apple[i]-diff-min2);
                
                }
            else
                result+=(candy[i]-min1)+(apple[i]-min2);
        }
        cout<<result<<endl;
        result=0;
    }
}