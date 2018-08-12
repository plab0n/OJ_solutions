#include <bits/stdc++.h>
using namespace std;

const int lim = 1e6;
int dp[lim+5][25];
int mark[lim+5];
int phi[lim+5];
void EulerPhi()
{
    for(int i=1; i<=lim; i++)phi[i] = i;
    phi[1] = 1;
    mark[1] = 1;
    for(int i=2; i<=lim; i++)
    {
        if(!mark[i])
        {
            for(int j=i; j<=lim; j+=i)
            {
                mark[j] = 1;
                phi[j] -= phi[j]/i;
            }
        }
    }
    //for(int i=1; i<=10; i++)cout<<phi[i]<<endl;
}
void precalc()
{
    dp[1][0] = 1;
    for(int i=2; i<=lim; i++)
    {
        int val = i;
        int cnt = 0;
        while(val!=1)
        {
            val = phi[val];
            ++cnt;
            if(cnt>20)break;
        }
            for(int j=0; j<=20; j++)
            {
                if(j==cnt)dp[i][j] = dp[i-1][j]+1;
                else
                dp[i][j] = dp[i-1][j];
            }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    EulerPhi();
    precalc();
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        cin>>n>>m>>k;
      //  cout<<dp[m][k]<<" "<<dp[n-1][k]<<endl;
        cout<<dp[m][k]-dp[n-1][k]<<endl;
    }
}
