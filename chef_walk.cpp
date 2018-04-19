#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long arr[100009];
    while(t--)
    {
        int n,r;
        cin>>n>>r;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        if(n==1)
            cout<<"YES"<<endl;
        else{
                long long loc = 1,mn=1e9+4,mx=0;
        for(int i=2; i<n; i++)
        {
            if(arr[i-1]>r)
            {
                if(mx>arr[i])
                {
                    loc = 0;
                    break;
                }
                if(arr[i]>arr[i-1])
                {
                    loc = 0;
                    break;
                }
                if(arr[i]<arr[i-1])
                {
                    mn = min(arr[i],mn);
                }
            }
            if(arr[i-1]<r)
            {
                if(mn<arr[i])
                {
                    loc = 0;
                    break;
                }
                if(arr[i]<arr[i-1])
                {
                    loc = 0;
                    break;
                }
                if(arr[i]>arr[i-1])
                {
                    mx = max(arr[i],mx);
                }
            }
        }
        if(loc)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
                    }
    }
}
