#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    /*int raw1,raw2;
    cin>>raw1>>raw2;*/
    string s1,s2;
    /*s1=to_string(raw1);
    s2=to_string(raw2);*/
    cin>>s1>>s2;
    int * a=new int[s1.length()];
    for(int i=0;i<s1.length();++i)
        {
            a[i]=(s1[i]-'0')+(s2[i]-'0');
        }
    for(int i=0;i<s2.length();++i)
    {
        if(a[i]==2)
            a[i]=0;
        cout<<a[i];
    }
    
    
}
