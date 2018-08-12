#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100009];
vector<int>comp[100009];
int vis[100009];
int id;

void dfs(int s)
{
    if(vis[s])return ;
    vis[s] = 1;
    comp[id].push_back(s);

    for(int i=0; i<adj[s].size(); i++)
    {
        dfs(adj[s][i]);
    }
}


int main()
{
    int n;
    vector<pair<int,int>>vec;
    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            if(val==0)continue;
            adj[val].push_back(i);
           // adj[i].push_back(val);
        }
        id = 0;
        for(int i=1; i<=n; i++)
        {
            if(!vis[i])
            {
                dfs(i);
                sort(comp[id].begin(),comp[id].end());
                vec.push_back(make_pair(comp[id][comp[id].size()-1],id));
                ++id;
            }
        }
        sort(vec.begin(),vec.end());
        for(int i=0; i<vec.size(); i++)
        {
            for(int j=comp[vec[i].second].size()-1; j>=0; j--)
            {
                cout<<comp[vec[i].second][j]<<" ";
            }
        }
        cout<<endl;
        for(int i=0; i<=n; i++)
        {
            comp[i].clear();
            adj[i].clear();
            vis[i] = 0;
        }
        vec.clear();
    }
}
