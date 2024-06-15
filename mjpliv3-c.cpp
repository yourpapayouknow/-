#include <iostream>
#include <cmath>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string init,pswd;
    cin>>init>>pswd;
    int count=0;    
    for(int j=0;j<n;++j)
    {
        int dinit = init[j] - '0';
        int dpswd = pswd[j] - '0';
        int distance = abs(dinit - dpswd);
        count += min(distance, 10 - distance);
    }
    cout<<count<<endl;
    return 0;
}