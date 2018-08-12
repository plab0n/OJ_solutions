#include <bits/stdc++.h>
using namespace std;

vector<int>adj[1008];
int loc,res;
int vis[1009];
void dfs(int s)
{
    if(vis[s]){
        res = s;
        loc = 1;
        return ;
    }
    vis[s] = 1;
    for(int i=0; i<adj[s].size(); i++)
    {
        dfs(adj[s][i]);
        if(loc)return ;
    }

}

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            int pa;
            cin>>pa;
            adj[i].push_back(pa);
        }
        for(int i=1; i<=n; i++)
        {
            memset(vis,0,sizeof(vis));
            loc = 0;
            res = 0;
            dfs(i);
            cout<<res<<" ";
        }
        cout<<endl;
        for(int i=1; i<=n; i++)
            adj[i].clear();
    }
}
