#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,arr[105];
    cin>>t;
    int cas =1 ;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        int loc = 0;
        for(int i=2; i<=n; i++)
        {
            if(arr[i-1]==arr[i]-1)
            {
                loc = 1;
                break;
            }
        }
        if(loc)
            cout<<"Case "<<cas++<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<cas++<<": "<<"No"<<endl;
    }
}
