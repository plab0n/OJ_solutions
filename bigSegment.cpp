#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<long long,long long>,int>mp;
    int n;

    while(cin>>n)
    {
        long long min=10000000000,max=0,a,b;
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b;
            if(min>a)
                min = a;
            if(max<b)
                max = b;
            mp[make_pair(a,b)] = i;
        }
        if(mp[make_pair(min,max)]>0)
            cout<<mp[make_pair(min,max)]<<endl;
        else
            cout<<-1<<endl;
            mp.clear();
    }
}
