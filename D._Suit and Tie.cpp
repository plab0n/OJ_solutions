#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[205];
    int n;
    while(cin>>n)
    {
        int cnt = 0;
        for(int i=1; i<=n+n; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<=n+n; i++)
        {
            for(int j=1; j<n+n-1; j+=2)
            {
                if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);++cnt;}
            }
        }
        cout<<cnt<<endl;
    }
}
