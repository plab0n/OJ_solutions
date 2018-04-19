#include <bits/stdc++.h>
using namespace std;
int dp[1005];
vector<int>adj[1005];
int preCalc(int s)
{
    //cout<<s<<endl;
    if(adj[s].size()==0)
    {
        return dp[s] = 1;
    }
    if(dp[s]!=-1)return dp[s];
    //vis[s] = 1;
    int ans = 0;
    for(int i=0; i<adj[s].size(); i++)
    {
        ans += preCalc(adj[s][i]);
    }
    return dp[s] = ans;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    int cas = 1;
    cin>>t;
    set<int>st;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));
        for(int i=1; i<=n-1; i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        preCalc(1);
        int node = n;
        for(int i=1; i<=n; i++)
        {
            int sz = adj[i].size();
            if(sz==k || sz==0)
                continue;
            else if(sz<k){
                for(int j=0; j<sz; j++)
                {
                    node-=(dp[adj[i][j]]);
                    if(adj[adj[i][j]].size()!=0)
                        node-=1;
                }
                if(i==1)
                    break;
            }
            else{
                for(int j=0; j<sz; j++)
                {
                    st.insert(dp[adj[i][j]]);
                }
                set<int> :: iterator itr = st.begin();
                set<int>:: iterator itr2 = st.end();
                int cnt = 0;
                while(itr!=itr2)
                {
                    node-=*itr;
                    itr++;
                    ++cnt;
                    if(sz-cnt==k)
                        break;
                }
                st.clear();
            }
        }
        cout<<"Case "<<cas++<<": "<<node<<endl;
        for(int i=1; i<=n; i++)
            adj[i].clear();
    }
}
