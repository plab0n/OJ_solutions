#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100009];
    int n;
    while(cin>>n)
    {
        int cnt = 0;
        for(int i=1; i<=n; i++){
        cin>>arr[i];
        if(arr[i]==1)++cnt;
        }

        sort(arr+1,arr+n+1);
        if(cnt==n)
        {
            for(int i=1; i<n; i++)
                cout<<arr[i]<<" ";
                cout<<2<<endl;
        }
        else{
        cout<<1<<" ";
        for(int i=1; i<n; i++)cout<<arr[i]<<" ";
        cout<<endl;
        }
    }
}
