#include<cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,m;
    scanf("%d %d",&n,&m);
    int * arr = new int[n+2];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;++i)
    {
        next_permutation(arr, arr+n);
    }
    for(int i=0;i<n;++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    delete[] arr;
    }
    return 0;
}