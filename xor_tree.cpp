#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100009];
int label[100009];
int flip[100009];
int bit[100009];
int vis[100009];
int tar[100009];
vector<int>res;
int par[100009];
void fast_IO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}
void FiLe()
{
	freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
}
void dfs(int s,int p)
{
	vis[s] = 1;
	//cout<<s<<endl;
	if(label[s]-2>=0)
		{
			if(flip[par[p]])
			{
				if(flip[par[p]]%2)
				{
                    if(bit[s]==0)bit[s] = 1;
                    else
                        bit[s] = 0;
				}
				flip[s] = flip[par[p]];
			}
		}

		if(bit[s]!=tar[s])
		{
				flip[s]++;
				res.push_back(s);
		}
	for(int i=0; i<adj[s].size(); i++)
	{
		int u = adj[s][i];
		if(!vis[u]){
		par[u] = s;
		label[u] = label[s]+1;
		dfs(u,s);
		}
	}
}


int main()
{
	fast_IO();
	//FiLe();
	int n;
	cin>>n;
	for(int i=1; i<=n-1; i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	for(int i=1; i<=n; i++)
		cin>>bit[i];
	for(int i=1; i<=n; i++)
			cin>>tar[i];
	memset(vis,0,sizeof(vis));
	dfs(1,1);

	cout<<res.size()<<endl;
	for(int i=0; i<res.size(); i++)
			cout<<res[i]<<endl;
	return 0;
}
