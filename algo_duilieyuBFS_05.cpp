#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
struct point
{
    int x,y;
};
int a[10][10],vis[10][10]={0},dir[8]={1,0,-1,0,0,1,0,-1};
point pre[10][10];
void BFS()
{
    queue<point> q;
    point p;
    p.x=0;
    p.y=0;
    q.push(p);
    vis[0][0]=0;
    while(!q.empty())
    {
        point now=q.front();
        q.pop();
        if(now.x==4&&now.y==4)
            return;
        for(int i=0;i<4;++i)
        {
            point next;
            next.x=now.x+dir[i];
            next.y=now.y+dir[i+4];
            if(next.x>=0&&next.x<5&&next.y>=0&&next.y<5&&!a[next.x][next.y]&&!vis[next.x][next.y])
            {
                q.push(next);
                vis[next.x][next.y]=1;
                pre[next.x][next.y]=now;
            }
        }
    }
}

void print(point cur)
{
    if(cur.x==0&&cur.y==0)
    {
        cout<<"(0, 0)"<<endl;
        return;
    }
    print(pre[cur.x][cur.y]);
    cout<<"("<<cur.x<<", "<<cur.y<<")"<<endl;
}

int main()
{
    for(int i=0;i<5;++i)
        for(int j=0;j<5;++j)
            cin>>a[i][j];
    BFS();
    point exit;
    exit.x=4;
    exit.y=4;
    print(exit);
    return 0;
}