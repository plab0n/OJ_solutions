#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1009];

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        sort(arr+1,arr+n+1);
        int j = n;
        int sum = 0;
        for(int i=1; i<=(n/2); i++)
        {
            sum += (arr[j]-arr[i]);
            --j;
        }
        cout<<sum<<endl;
    }
}
