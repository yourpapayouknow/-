#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int result[1000000];
int main()
{
    int t;
    cin>>t;
    t++;
    while (--t)
    {
        char s[20];
        cin.getline(s,20);
        int n;
        n = strlen(s);
        for(int i=1;i<n;++i)
            if(s[i]!=' ')
                s[i/2]=s[i];
        s[(n/2)+1]='\0';
        n = strlen(s);
        //cout<<n<<endl;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(s[0]!=0)
            {
                int num1=(s[j]-'0')*(n/2+1)+;
                int num2=(s[0]-'0')*(n/2);
            }
            }
            
            next_permutation(s,s+n);
        }
    } 
    
    return 0;
}