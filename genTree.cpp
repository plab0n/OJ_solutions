#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int mx = 0;
        int cnt = 0;
        for(int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            if(mx<val)++cnt;
            mx = max(mx,val);
        }
        cout<<cnt<<endl;
    }
}
