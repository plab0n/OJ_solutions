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
//	freopen("output.out","w",stdout);
}

int main()
{
    Fast_IO();
    FiLe();
    int cnt[105];
    vector<int>dist;
    int n,m;
    while(cin>>n>>m)
    {
        memset(cnt,0,sizeof(cnt));
        for(int i=1;i<=m; i++)
        {
            int val;
            cin>>val;
            if(!cnt[val])
                dist.push_back(val);
            cnt[val]++;
        }
        if(dist.size()<n)cout<<0<<endl;
        else{
            for(int i=0; i<dist.size(); i++)
            {
                for(int j=0; j<dist.size()-1; j++)
                {
                    if(cnt[dist[j]]<cnt[dist[j+1]])
                        swap(dist[j],dist[j+1]);
                }
            }
            int mx = 0;
            for(int i=0; i<dist.size(); i++)
            {
                int mn = 1e8;
                for(int j=i; j<n; j++)
                {
                    mn = min(cnt[dist[j]],mn);
                }
                mx = max(mn,mx);
            }
            cout<<mx<<endl;
        }
        dist.clear();
    }
}
