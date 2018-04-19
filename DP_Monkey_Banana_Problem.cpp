#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long dp[205][105];
    int t;
    cin>>t;
    int cas = 1;
    while(t--)
    {
        int n;
        cin>>n;
        memset(dp,0,sizeof(dp));
        int k = 1;
        for(int i=1; i<=2*n-1; i++)
        {
            for(int j=1; j<=k; j++)
            {
                cin>>dp[i][j];
            }
            if(i>=n)
            {
                --k;
            }
            else
                ++k;
        }
        k = 2;
        for(int i=2; i<=2*n-1; i++)
        {
            for(int j=1; j<=k; j++)
            {
                dp[i][j]+=max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]));
               // cout<<dp[i][j]<<endl;
            }
            if(i>=n)
            {
                --k;
            }
            else
                ++k;
        }
        cout<<"Case "<<cas++<<": "<<dp[2*n-1][1]<<endl;
    }
}
