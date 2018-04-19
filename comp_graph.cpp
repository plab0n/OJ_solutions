#include <bits/stdc++.h>
using namespace std;


#define sc(a) scanf("%d",&a);
#define sc2(a,b) scanf("%d%d",&a,&b);
#define pf(a) printf("%d\n",a);
#define pf2(a,b) printf("%d %d\n",a,b);
#define MAX 15005*2
int par[MAX];
int sz[MAX];
int find_(int r);
void union_(int a,int b)
{
    int u = find_(a);
    int v = find_(b);
    if(u==v)
        return ;
    else
    {
        par[u] = v;
        sz[v]+=sz[u];
        sz[u] = sz[v];
    }
    cout<<sz[v]<<endl;
}
int find_(int r)
{
    if(par[r]==r)
        return r;
        else
            return par[r] = find_(par[r]);
}
int main()
{
    int n,i,x,y,mx=0,mn=2*15000 +1;
    sc(n);

    for(i=1; i<=2*n; i++)
    {
        par[i] = i;
        sz[i] = 1;
    }
    int temp = n;
    while(n--)
    {
        sc2(x,y);
        union_(x,y);
    }
    for(i=1; i<=2*temp; i++)
    {
       int cur = sz[find_(i)];
        if(sz[find_(i)]==1)
            continue;
        if(cur>mx) mx = cur;
        if(cur<mn) mn = cur;
    }
    pf2(mn,mx);
}
