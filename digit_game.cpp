#include <bits/stdc++.h>
using namespace std;
vector<int>adj[15];
int dist[100009];
int vis[100009];
char str[100009];
int len;
int main()
{
        scanf("%s",str);
        len = strlen(str);
        for(int i=0; i<len; i++)
        {
            adj[(int)str[i]-'0'].push_back(i);
        }
            for(int i=0; i<=len; i++)
            {
                dist[i] = 0;
                vis[i] = 0;
            }
    queue<int>Q;
    vis[0] = 1;
    dist[0] = 0;#include <bits/stdc++.h>
using namespace std;
vector<int>adj[15];
int dist[100009];
int vis[100009];
char str[100009];
int len;
int main()
{
        scanf("%s",str);
        len = strlen(str);
        for(int i=0; i<len; i++)
        {
            adj[(int)str[i]-'0'].push_back(i);
        }
            for(int i=0; i<=len; i++)
            {
                dist[i] = 0;
                vis[i] = 0;
            }
    queue<int>Q;
    vis[0] = 1;
    dist[0] = 0;
    Q.push(0);
    while(!Q.empty())
    {
        int u = Q.front();
        if(u==len-1)
            break;
        Q.pop();
        int sz = adj[(int)str[u]-'0'].size();
        for(int i=0; i<sz; i++)
        {
            if(!vis[adj[(int)str[u]-'0'][i]])
            {
                dist[adj[(int)str[u]-'0'][i]] = dist[u]+1;
                Q.push(adj[(int)str[u]-'0'][i]);
                vis[adj[(int)str[u]-'0'][i]] = 1;
            }
        }
        if(u-1>0 && !vis[u-1])
        {
            Q.push(u-1);
            vis[u-1] = 1;
            dist[u-1] = dist[u]+1;
        }
        if(u+1<len && !vis[u+1])
        {
            Q.push(u+1);
            vis[u+1] = 1;
            dist[u+1] = dist[u]+1;
        }

    }
        printf("%d\n",dist[len-1]);
}

    Q.push(0);
    while(!Q.empty())
    {
        int u = Q.front();
        if(u==len-1)
            break;
        Q.pop();
        int sz = adj[(int)str[u]-'0'].size();
        for(int i=0; i<sz; i++)
        {
            if(!vis[adj[(int)str[u]-'0'][i]])
            {
                dist[adj[(int)str[u]-'0'][i]] = dist[u]+1;
                Q.push(adj[(int)str[u]-'0'][i]);
                vis[adj[(int)str[u]-'0'][i]] = 1;
            }
        }
        if(u-1>0 && !vis[u-1])
        {
            Q.push(u-1);
            vis[u-1] = 1;
            dist[u-1] = dist[u]+1;
        }
        if(u+1<len && !vis[u+1])
        {
            Q.push(u+1);
            vis[u+1] = 1;
            dist[u+1] = dist[u]+1;
        }

    }
        printf("%d\n",dist[len-1]);
}
