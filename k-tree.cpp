#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int n,k,d;
int dp[105][105];
int calc(long long amount,long long d)
{
    if(amount<0)return 0;
    if(amount==0 && d==0)return 1LL;
    if(dp[amount][d]!=-1)return dp[amount][d];
    long long ans = 0;
    for(int i=1; i<=k; i++)
    {
        if(i>n)break;
        if(i>=d)
        ans = ((ans%mod) + (calc(amount-i,0)%mod))%mod;
        else
            ans = ((ans%mod) + (calc(amount-i,d)%mod))%mod;
    }
    return dp[amount][d] = ans%mod;
}
int main()
{
    while(cin>>n>>k>>d)
    {
        memset(dp,-1,sizeof(dp));
        cout<<calc(n,d)<<endl;;
    }
}
