#include <iostream>
#include <queue>
using namespace std;
long long n;
void BFS()
{
    queue<long long> q;
    q.push(1);
    while(!q.empty())
    {
        long long now = q.front();
        q.pop();
        if(now%n==0)
        {
            cout<<now<<endl;
            return;
        }
        else
        {
            long long q1=now*10+1;
            long long q2=now*10;
            q.push(q1);
            q.push(q2);
        }
    }
}
int main()
{
    while(cin>>n)
    {
        if(n==0)
            break;
        BFS();
    }
}