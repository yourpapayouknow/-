#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string firname,secname,allword;
    cin>>firname>>secname>>allword;
    int firname_len=firname.length(),secname_len=secname.length(),allword_len=allword.length();
    if(firname_len+secname_len!=allword_len)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    else
        {
            string name=firname+secname;
            sort(name.begin(),name.end());
            sort(allword.begin(),allword.end());
            if(name==allword)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

}