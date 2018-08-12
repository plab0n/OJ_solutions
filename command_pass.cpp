#include <bits/stdc++.h>
using namespace std;

vector<int>adj[200009];
int sub[200009];
int id[200009];
int vis[200009];
vector<int>com;
int dfs(int s)
{
    //cout<<s<<endl;
    if(vis[s])return 0;
    priority_queue<int>Q;
    for(int i=0; i<adj[s].size(); i++)
    {
        Q.push(-adj[s][i]);
    }
    int num_vertex = 0;
    while(!Q.empty())
    {
        int u = Q.top();
       // id[u] = com.size()+1;
        com.push_back(u*(-1));
        num_vertex += dfs(u*(-1));
        Q.pop();
    }
    return sub[s] = num_vertex+1;
}
int main()
{
    int n,k;
    ios_base::sync_with_stdio(false);

    while(cin>>n>>k)
    {
        memset(sub,0,sizeof(sub));
        memset(id,0,sizeof(id));
        memset(vis,0,sizeof(vis));
        for(int i=2; i<=n; i++)
        {
            int v;
            cin>>v;
            adj[v].push_back(i);
        }
        id[1] = 0;
        com.push_back(1);
        dfs(1);
        for(int i=0; i<com.size(); i++){
            id[com[i]] = i+1;
        }
        //cout<<endl;
        while(k--)
        {
            int u,st;
            cin>>u>>st;
            if(st>sub[u])cout<<-1<<endl;
            else
            {
              //  cout<<id[u]<<endl;
                cout<<com[id[u]+(st-1)-1]<<endl;
            }
        }
        for(int i=1; i<=n; i++)adj[i].clear();
        com.clear();
    }
}
