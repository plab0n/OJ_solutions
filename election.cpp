#include <bits/stdc++.h>
using namespace std;

vector<long long>vec;
int sz;
int vis[3009];
long long dp[3009][3009];
long long calc(int num1,int num2,int i,long long cost)
{
   cout<<num1<<" "<<num2<<" "<<i<<" "<<cost<<endl;
    if(num1>num2)
    {
        return cost*1LL;
    }
    if(i==sz)return 1e18;
 //   if(dp[i][num1]!=-1)return dp[i][num1];
    int v=0;
    long long v1=1e18,v2=1e18;
    if(vis[i])
        v = -1;
        v1 = calc(num1+1,num2+v,i+1,cost+vec[i]);
        v2 = calc(num1,num2,i+1,cost);
    return  min(v1,v2);
    //return dp[i];
}

int main()
{
    int n,m;
    vector<pair<long long,long long>>tmp;
    int cnt[3009];
    while(cin>>n>>m)
    {
        memset(cnt,0,sizeof(cnt));
       // memset(dp,-1,sizeof(dp));
        memset(vis,0,sizeof(vis));
        int vote=0,mx = 0,op;
        for(int i=1; i<=n; i++)
        {
            long long u,cost;
            cin>>u>>cost;
            if(u==1)
            {
                vote++;
            }
            else{
                tmp.push_back(make_pair(cost,u));
                cnt[u]++;
            }
        }
//        int mx = 0;
        int cm=0;
        for(int i=1; i<=m; i++)
        {
            if(cnt[i]>mx)
            {
                cm = 1;
                op = i;
                mx = cnt[i];
            }
            else if(cnt[i]==mx)
                cm++;
        }
        for(int i=0; i<tmp.size(); i++)
        {
            if(tmp[i].second==op){
                vis[i]  = 1;
                }
            vec.push_back(tmp[i].first);
        }
       // cout<<vote<<" "<<mx<<endl;
        sz = vec.size();
        if(vote>mx)cout<<0<<endl;
        else{
        if(cm>1)
            ++mx;
        cout<<1LL*calc(vote,mx,0,0)<<endl;

        }
        tmp.clear();
        vec.clear();

    }
}
