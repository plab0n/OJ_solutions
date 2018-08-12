#include <bits/stdc++.h>
#define pii pair<int,int>
#define f first
#define s second
using namespace std;

struct Edge{
    int u,v,cost;
     bool operator<(const Edge& p) const
    {
        return cost < p.cost;
    }
};
vector<int> cost[105];
vector<int>adj[105];
map<pair<int,int>,int>mark;
int d[105];
int vis[105];
int dist[105];
int n,node;
Edge tot;
vector<Edge>vec;
    int a,b,par[105],r;
    int find(int r)
    {
        if(par[r]==r)
            return r;

            par[r] = find(par[r]);
            return par[r];
    }
void init(int n)
{
    for(int i=1; i<=n; i++)
        par[i] = i;
}
int kruskal(int n)
{
    sort(vec.begin(),vec.end());
    int cnt = 0,sum=0;
    int sz = vec.size();
    for(int i=0; i<sz; i++)
    {
        int p1 = find(vec[i].u);
        int p2 = find(vec[i].v);
        if(p1!=p2)
        {
            cout<<vec[i].u<<" "<<vec[i].v<<" "<<p1<<" "<<p2<<endl;
            par[p2] = par[p1];
            mark[make_pair(vec[i].u,vec[i].v)] = 1;
            mark[make_pair(vec[i].u,vec[i].v)] = 1;
            ++cnt;
            if(cnt==n-1)break;
        }
    }
    vec.clear();
  //  return sum;
}
void dfs(int s)
{
    if(vis[s])return ;
    vis[s] = 1;
    ++node;
    for(int i=0; i<adj[s].size(); i++)
    {
        tot.u = s;
        tot.v = adj[s][i];
        tot.cost = cost[s][i];
        vec.push_back(tot);
        dfs(adj[s][i]);
    }
}
int calc(int s,int dest)
{
    int vis[105];
    queue<int>Q;
    Q.push(s);
    for(int i=1; i<=n; i++)
        dist[i] = 1000000;
    memset(vis,0,sizeof(vis));
    vis[s] = 1;
    dist[s] = 0;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(!vis[adj[u][i]] && (mark[make_pair(u,adj[u][i])] || mark[make_pair(adj[u][i],u)]))
            {
                Q.push(adj[u][i]);
                dist[adj[u][i]] = min(dist[adj[u][i]],cost[u][i]);
                if(adj[u][i]==dest)return dist[adj[u][i]];
            }
        }
    }
    return -1;
}
int main()
{
    int e,q;
    freopen("input.in","r",stdin);
    ios_base::sync_with_stdio(false);

    while(cin>>n>>e>>q){

    for(int i=1; i<=e; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
       adj[a].push_back(b);
       adj[b].push_back(a);
       cost[a].push_back(c);
       cost[b].push_back(c);
    }
    init(n);
  //  kruskal(n);
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            node = 0;
            dfs(i);
            cout<<node<<endl;
            kruskal(node);
        }
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<par[a]<<" "<<par[b]<<endl;
        int res = calc(a,b);
        if(res==1)cout<<"no path"<<endl;
        else cout<<res<<endl;
    }
  //  vec.clear();
    for(int i=1; i<=n; i++){
        adj[i].clear();
        cost[i].clear();
    }
    }
}
