#include <bits/stdc++.h>
using namespace std;
int color[205],vis[205];
vector<int>adj[205];
int bfs(int s)
{
    queue<int>Q;
    color[s] = 0;
    int tot=0,col=0;
    Q.push(s);
    while(!Q.empty())
    {
        int u = Q.front();
        if(color[u]==1)col++;
        tot++;
        Q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            //cout<<"dlkd";
                if(color[adj[u][i]]==1e6){
                color[adj[u][i]] = 1-color[u];
                Q.push(adj[u][i]);
                }
                else if(color[u]==color[adj[u][i]])return -1;
        }
    }
    if(tot==1)return 1;
    return min(col,tot-col);
}
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int e,v;
        scanf("%d%d",&e,&v);
        for(int i=0; i<e; i++)
            color[i] = 1e6;
        for(int i=1; i<=v; i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ans = 0;
        for(int i=0; i<e; i++)
        {
            if(color[i]==1e6)
            {
                int val = bfs(i);
                if(val==-1){
                    ans = -1;
                    break;
                }
                ans+=val;
            }
        }
        cout<<ans<<endl;
        for(int i=0; i<e; i++)
            adj[i].clear();
    }
}
