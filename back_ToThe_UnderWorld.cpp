#include <bits/stdc++.h>
using namespace std;

const int lim = 20000;
int vis[lim+5];
vector<int>adj[lim+5];
int dist[lim+5];

int bfs(int s)
{
    queue<int>Q;
    Q.push(s);
    vis[s] = 1;
    dist[s] = 0;
    int odd=0,even=0;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        if(dist[u]%2)
            odd++;
        else
            even++;
        for(int i=0; i<adj[u].size(); i++)
        {
            if(!vis[adj[u][i]])
            {
                vis[adj[u][i]] = 1;
                dist[adj[u][i]] = dist[u]+1;
                Q.push(adj[u][i]);
            }
        }
    }
    return max(odd,even);
}
int main()
{
    int t;
    scanf("%d",&t);
    int cas = 1;
    vector<int>node;
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        int n;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            if(!vis[u])
            {
                node.push_back(u);
                vis[u] = 1;
            }
            if(!vis[v])
            {
                node.push_back(v);
                vis[v] = 1;
            }
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int sum=0;
        memset(vis,0,sizeof(vis));
        int sz = node.size();
        for(int i=0; i<sz; i++)
        {
            if(!vis[node[i]])
            {
                sum+=bfs(node[i]);
            }
        }
        for(int i=1; i<=lim; i++)
            adj[i].clear();
        printf("Case %d: %d\n",cas++,sum);
        node.clear();
    }
}
