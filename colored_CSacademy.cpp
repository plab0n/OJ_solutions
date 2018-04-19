#include <bits/stdc++.h>
#define MAX 10009

using namespace std;

vector<int>adj[MAX];
int Label[MAX];
int vis[MAX];
int par[MAX][MAX];
int t[MAX];
void bfs(int s)
{
    vis[s] = 1;
    memset(Label,-1,sizeof(Label));
    queue<int>Q;
    Q.push(s);
    Label[s] = 0;
    t[s] = s;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(!vis[adj[u][i]])
            {
                t[adj[u][i]] = u;
                Label[adj[u][i]] = Label[u]+1;
                vis[adj[u][i]]  = 1;
                Q.push(adj[u][i]);
            }
        }
    }
}
void LCA_init(int n)
{

    memset(par,-1,sizeof(par));
//    for(int i=0; i<n; i++)
//        cout<<t[i]<<" ";
    //cout<<endl;
    for(int i=1; i<=n; i++)
        par[i][1] = t[i];
    for(int j=2; 1<<j<=n; j++)
    {
        for(int i=1; i<=n; i++)
        {
            if(par[i][j-1]!=-1)
                par[i][j] = par[par[i][j-1]][j-1];
        }
    }
}
int LCA_Query(int p,int q,int n)
{
    int log=1;
    if(Label[p]<Label[q])
        swap(p,q);
    while(1){
        int next = log+1;
        if((1<<next)>Label[p])
            break;
        ++log;
    }

    for(int i=log; i>=1; i--)
    {
        if(Label[p]-(1<<i)>=Label[q])
            p = par[p][i];
    }
    if(p==q)
        return p;
    for(int i=log; i>=1; i--)
    {
        if(par[p][i]!=par[q][i]&&par[p][i]!=-1)
        {
            p = par[p][i];
            q = par[q][i];
        }
    }
    cout<<p<<" "<<q<<endl;
    return t[p];
}
int main()
{
    int n,m;
    int color[MAX];
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>color[i];
    for(int i=1; i<=n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    bfs(1);
    LCA_init(n);
    for(int i=1; i<=m; i++){
    int n1,n2;
    cin>>n1>>n2;
    if(n1==1)
        color[n1]++;
    if(n1==2){
            int sum = 0;
        for(int j=1; j<=n; j++)
        {
            if(j!=n2 && (color[n2]%2)==(color[j]%2))
            {
                cout<<n2<<" "<<j<<endl;
               int go = LCA_Query(n2,j,n);
               cout<<go<<endl;
               cout<<Label[j]<<" "<<Label[go]<<" "<<Label[n2]<<endl;
               sum+=abs(Label[j]-Label[go])+abs(Label[n2]-Label[go]);
            }
        }
        cout<<sum<<endl;
    }
    }
}

