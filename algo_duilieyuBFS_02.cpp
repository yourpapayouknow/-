#include <iostream>
#include <string>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int result = 0;
    while(n--)
    {
        string s;
        cin>>s;
        if(string::npos != s.find("++"))
            result++;
        else if(string::npos != s.find("--"))
            result--;
    }
    cout<<result<<endl;
}
