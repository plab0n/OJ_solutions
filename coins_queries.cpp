#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    map<long long,int>mp;
    map<long long,int>cnt;
    map<long long,int>po;
    int n,q;
    cin>>n>>q;
    long long j = 1;
    long long po_at[35];
    for(long long i=0; i<=31; i++)
    {
        po_at[i] = j;
        po[j] = 1;
        j*=2;

      //  cout<<j<<endl;
    }
    for(int i=1; i<=n; i++)
    {
        long long val;
        cin>>val;
        cnt[val]++;
        mp[val] = 1;
    }
    long long v = 1;
    for(long long i=0; i<=31; i++)
    {

       // cout<<v<<endl;
        if(cnt[v]>0)
        {
            long long res=0;
            int last = cnt[v];
            for(int i=1; i<=last; i++)
            {
                if(!mp[res+v])mp[res+v] = i;
                mp[res+v] = min(i,mp[res+v]);
                res+=v;
            }
        }
        v*=2;
    }
    while(q--)
    {
        int n;
        cin>>n;
        long long bit = 0,res=0,rem=0;
        while(n>0)
        {
            if(n%2==1)
            {
                long long pw = po_at[bit];
                if(!mp[pw])
                {
                    rem+=pw;
                }
                else{
                if(mp[rem+pw]){res+=mp[rem+pw];rem=0;}
                else
                    rem+=mp[rem+pw];
                }
            }
            n/=2;
            ++bit;
        }
        if(!rem)cout<<res<<endl;
        else cout<<-1<<endl;
    }
}
