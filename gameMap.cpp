#include <bits/stdc++.h>
using namespace std;

void Fast_IO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}
void FiLe()
{
	freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
}
int dp[100009];
int vis[100009];
vector<int>adj[100009];

int dfs(int s)
{
    if(vis[s])return 0;
    if(dp[s])return dp[s];
    int res = 1;
    vis[s] = 1;
    int mx = 0;
    for(int i=0; i<adj[s].size(); i++)
    {
        if(adj[adj[s][i]].size()>adj[s].size())
        {
            mx = max(mx,dfs(adj[s][i]));
        }
    }
    vis[s] = 0;
    return dp[s] = res+mx;
}

int main()
{
    int n,m;
    Fast_IO();
    //FiLe();
    while(cin>>n>>m)
    {
        for(int i=1; i<=m; i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int mx = 0;
        for(int i=0; i<n; i++)
        {
            if(!dp[i])
                dfs(i);
        }

        for(int i=0; i<n; i++){
            mx = max(mx,dp[i]);
        }
        cout<<mx<<endl;
        for(int i=0; i<n; i++)
        {
            vis[i] = 0;
            adj[i].clear();
            dp[i] = 0;
        }
    }
}
