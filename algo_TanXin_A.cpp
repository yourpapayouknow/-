#include <iostream>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    while(n--)
    {
        int status[3]={0};
        cin>>status[0]>>status[1]>>status[2];
        if(status[0]+status[1]+status[2]>=2)
        {
            flag++;
        }
    }
    cout<<flag<<endl;
    return 0;
}