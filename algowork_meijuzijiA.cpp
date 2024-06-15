#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int pos[3]={a,b,c};
        sort(pos,pos+3);
        if(pos[0]==pos[1]&&pos[1]==pos[2])
            cout<<0<<endl;
        else if(pos[0]==pos[1]&&pos[1]!=pos[2])
        {
            pos[2]-=1;
            if(pos[1]==pos[2])
                cout<<0<<endl;
            else
            {
                int judge[2];
                judge[0]=pos[2]-pos[1];judge[1]=pos[2]-(pos[1]+1);
                cout<<2*min(judge[0],judge[1])<<endl;
            }
                
        }
        else if(pos[0]!=pos[1]&&pos[1]==pos[2])
        {
            pos[0]+=1;
            if(pos[0]==pos[1])
                cout<<0<<endl;
            else
            {
                int judge[2];
                judge[0]=pos[1]-pos[0];judge[1]=(pos[1]-1)-pos[0];
                cout<<2*min(judge[0],judge[1])<<endl;
            }
        }
        else
        {
            pos[0]+=1;
            pos[2]-=1;
            if(pos[0]==pos[1]&&pos[1]==pos[2])
                cout<<0<<endl;
            else if(pos[0]==pos[1]&&pos[1]!=pos[2])
                cout<<2*abs(pos[2]-pos[1])<<endl;
            else if(pos[0]!=pos[1]&&pos[1]==pos[2])
                cout<<2*abs(pos[1]-pos[0])<<endl;
            else
                cout<<(pos[2]-pos[0])+(pos[2]-pos[1])+(pos[1]-pos[0])<<endl;
        }
    }
    return 0;
}