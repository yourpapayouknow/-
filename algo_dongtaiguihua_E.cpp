#include <iostream>
using namespace std;
int trang[353][353];
int result[353];
int main()
{
    int N;
    while(cin>>N)
    {
        for(int i=1;i<=N;++i)
            for(int j=1;j<=i;++j)
                cin>>trang[i][j];
        for(int i=1;i<=N;++i)
            result[i]=trang[N][i];
        for(int i=N-1;i>=1;--i)
            for(int j=1;j<=i;++j)
                {
                    if(result[j]>result[j+1])
                        result[j]=result[j]+trang[i][j];
                    else
                        result[j]=result[j+1]+trang[i][j];
                }
        cout<<result[1]<<endl;
    }
    return 0;
}