#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n,e,i,x,y,s,u,v;
    int vis[1000];
    bool stts;
    vector<int>graph[1000];
      queue<int>Q;

    while(cin>>e){
        if(e==0)
            return 0;
        else{
        stts = true;
        cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);

    }

    for(i=0; i<=n; i++)
        vis[i] = -1;

        Q.push(0);
        vis[0] = 0;
        while(!Q.empty())
        {
            u = Q.front();
            Q.pop();
            for(i=0; i<graph[u].size(); i++)
            {
                v = graph[u][i];
                if(vis[v]==-1)
                {
                    if(vis[u]==0)
                        vis[v] = 1;
                        else
                            vis[v] = 0;
                            Q.push(v);

                }

                else{
                        if(vis[u]==vis[v])
                        {
                            stts = false;
                            break;
                        }
                    }

            }
            if(!stts)
                break;
        }
        if(stts)
        {
            cout<<"BICOLORABLE"<<endl;
        }
        if(!stts)
            cout<<"NOT BICOLORABLE"<<endl;
            for(i=0; i<=n; i++)
                graph[i].clear();
                queue<int>Q();
                }
            }
            return 0;
}
