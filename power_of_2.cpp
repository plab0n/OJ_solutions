#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long long po[35];
    po[0] = 1;
    map<long long,int>id;
    long long mark[120009];
    long long arr[120009];
    for(long long i=1; i<=31; i++)
    {
        po[i] = po[i-1]*2;
    }
  //  cout<<po[31]<<endl;
    int n;
    while(cin>>n)
    {
        memset(mark,0,sizeof(mark));
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            id[arr[i]] = i;
        }
        if(n==1)cout<<1<<endl;
        else{
        int res = 0;
        for(int j=1; j<=n; j++)
        {
            if(mark[j])continue;
            int loc = 0;
            for(int i=0; i<=31; i++)
            {
                if(po[i]-arr[j]<0)continue;

                if(id[po[i]-arr[j]] && id[po[i]-arr[j]]!=j)
                {
                   // cout<<arr[j]<<" "<<id[po[i]-arr[j]]<<" "<<po[i]<<endl;
                    loc = 1;
                    mark[j] = 1;
                    mark[id[po[i]-arr[j]]] = 1;
                    break;
                }

            }
            if(!loc)++res;
        }
        cout<<res<<endl;
        id.clear();
        }
    }
}
