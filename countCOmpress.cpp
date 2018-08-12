#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector<int>vec;
    map<int,int>cnt;
    while(cin>>n>>m)
    {
        long long sum = 0;
        for(int i=1; i<=n; i++)
        {
            int a,b;
            cin>>a>>b;
            sum+= (a*1LL);
            int v1 = a-b;
          //  cout<<v1<<endl;
            if(!cnt[v1])vec.push_back(v1);
            cnt[v1]++;
        }
        if(sum<=m)cout<<0<<endl;
        else{
       // cout<<sum<<endl;
        int res = 0;
        for(int i=0; i<vec.size(); i++)
        {
            int v = cnt[vec[i]];
            cout<<v<<" "<<vec[i]<<endl;

            for(int j=1; j<=v; j++)
            {
                ++res;
                sum -= (vec[i]*1LL);
                if(sum<=m)
                {
                    break;
                }
            }
            if(sum<=m)
                break;
        }
        if(sum<=m)
        cout<<res<<endl;
        else cout<<-1<<endl;
        }
        vec.clear();
        cnt.clear();
        }
}
