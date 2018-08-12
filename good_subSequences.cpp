#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
       // memset(sum,0,sizeof(sum));
        int n,m;
        cin>>n>>m;
        int sz = 0;
        for(int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            if(val%m==0)++sz;
        }
        int res = (1<<sz)-1;
        cout<<res<<endl;
    }

}
