#include <bits/stdc++.h>
#include <vector>

using namespace std;
int vis[10009];
int vis2[10009];
int main()
{
    vector<pair<int,int>>vec;

    int p,q,l,r,i,j,k,a,b;
    cin>>p>>q>>l>>r;
    for(i=0; i<p; i++)
    {
        cin>>a>>b;
        for(j=a; j<=b; j++)
            vis[j] = 1;
    }
    int cnt = 0;
    for(i=0; i<q; i++)
    {
        cin>>a>>b;
        for(j=l; j<=r; j++)
        {
            if(!vis2[j]){
            if(vis[a+j] || vis[b+j])
            {
                ++cnt;
                vis2[j] = 1;
            }
            }
        }
    }
    cout<<cnt<<endl;
}
