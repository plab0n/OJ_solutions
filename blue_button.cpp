#include <bits/stdc++.h>
using namespace std;
int n,make;
map<int,int>vis;
map<int,int>dist;
int bfs(int s)
{
    queue<int>Q;
    while(!Q.empty())
        Q.pop();
    Q.push(s);
    vis[s] = 1;
    dist[s] = 0;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        if(u==make)
            return dist[u];
        if(!vis[u*2])
        {
            vis[u*2] = 1;
            dist[u*2] = dist[u]+1;
            Q.push(u*2);
        }
        if(u-1>0 && !vis[u-1])
        {
            vis[u-1] = 1;
            dist[u-1] = dist[u]+1;
            Q.push(u-1);
        }
    }
}
int main()
{
    while(cin>>n>>make)
    {
        //memset(vis,0,sizeof(vis));
        cout<<bfs(n)<<endl;
        vis.clear();
        dist.clear();

    }
}
