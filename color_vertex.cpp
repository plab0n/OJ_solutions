#include <bits/stdc++.h>
using namespace std;
int vis [200009];
vector <int> adj[200009];
int dist[200009];
int n,e,color[10009];
int bfs(int node)
{
    queue <int>Q;
    Q.push(node);
    vis[node] = 1;
    int cnt=0;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int k = 0; k<adj[u].size(); k++)
        {
            if(!vis[adj[u][k]])
            {
                int v = adj[u][k];
                //cout<<color[v]<<" "<<color[u]<<endl;
                if(color[v]!=color[u])
                {
                    ++cnt;
                }
                vis[v] = 1;
                Q.push(v);
            }
        }
    }
    return cnt;
}
int main()
{
    int n,v;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        cin>>v;
        adj[i].push_back(v);
        adj[v].push_back(i);
    }
    for(int i=1; i<=n; i++)
        cin>>color[i];
    cout<<bfs(1)+1<<endl;
}
