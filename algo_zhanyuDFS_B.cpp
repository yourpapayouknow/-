#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int s[5];
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    sort(s,s+4);
    s[4]=s[3]+1;
    int s1[4],flag=0;
    for(int i=0;i<4;++i)
        {
            s1[i]=s[i+1]-s[i];
            if(s1[i]==0)
                flag++;
        }
    cout<<flag<<endl; 
}