#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
int vis [10007],vis2[10009];
vector <int> adj[10009];
vector<int>adj2[10009];
int dist[10009],dist2[10009];
int n,e;
void bfs(int node)
{
    queue <int>Q;
    Q.push(node);
    vis[node] = 1;
    dist[node] = 0;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int k = 0; k<adj[u].size(); k++)
        {
            if(!vis[adj[u][k]])
            {
                int v = adj[u][k];
                dist[adj[u][k]] = dist[u]+1;
                vis[v] = 1;
                Q.push(v);
            }
        }
    }
}
void bfs2(int node)
{
    queue <int>Q;
    Q.push(node);
    vis2[node] = 1;
    dist2[node] = 0;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int k = 0; k<adj2[u].size(); k++)
        {
            if(!vis2[adj2[u][k]])
            {
                int v = adj2[u][k];
                dist2[adj2[u][k]] = dist2[u]+1;
                vis2[v] = 1;
                Q.push(v);
            }
        }
    }
}
int main ()
{
    int t;
    cin>>t;

    while(t--){
   int n,r,c,q;
    cin>>n>>r>>c>>q;
    for(int i = 1; i<=r; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj2[y].push_back(x);
    }
    bfs(c);
    bfs2(c);
    while(q--)
    {
        int u,v;
        cin>>u>>v;
        if(vis[u]>0 && vis2[v]>0)
            cout<<"The shortest distance from "<<u<<" to "<<v<<" is "<<dist[u]+dist[v]<<"."<<endl;
        else{
             cout<<"Not possible to go from "<<u<<" to "<<v<<"."<<endl;
        }
    }
    for(int i=0; i<n; i++)
    {
        adj[i].clear();
        adj2[i].clear();
        vis2[i] = 0;
        vis[i] = 0;
        dist[i] = 0;
        dist2[i] = 0;
    }
    }
}

