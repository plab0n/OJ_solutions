#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int arr[300009];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    int mx = 0;
    for(int i=1; i<=m; i++)
    {
        int val;
        cin>>val;
        mx = max(mx,val);
    }
    long long tot = 0;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]<=mx)
        {
            tot+=(mx-arr[i])+1*1LL;
        }
    }
    cout<<tot<<endl;
}
