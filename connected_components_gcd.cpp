#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec;
    int t,n,vis[1000009],j,cas=1,val;

    scanf("%d",&t);
    while(t--)
    {
        int cmp = 0,cnt,mx = 0;
        int i;
        memset(vis,0,sizeof(vis));
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            scanf("%d",&val);
            if(val%2!=0)
            {
                vec.push_back(val);
            }
            else
                cmp = 1;
            if(val>mx)
                mx = val;
                vis[val] = 1;
        }
        sort(vec.begin(),vec.end());
        int sz = vec.size();
        for(i=0; i<sz; i++)
        {
            int loc = 0;
            for(j=vec[i]; j<=mx; j+=vec[i])
            {
                if(j%2==0 && vis[j])
                {
                    loc = 1;
                }
                if(!vis[j])
                {
                    vis[i] = 1;
                }
            }
            if(!loc)
            {
                cmp++;
            }
        }
        cout<<"Case "<<cas++<<": "<<cmp<<endl;
        vec.clear();
    }
}
