#include <bits/stdc++.h>
using namespace std;
int dp[105][105];
int y[105],cnt[105],k,n,w,idx;
int nxt[105];
int calc(int i, int k)
{
    if(i>= n || k == 0)
    {
        return 0;
    }

    if(dp[i][k] != -1) return dp[i][k];
    int t1=0,j;
    int f = y[i]+w;
    for(j=i; j<n && y[j]<=f ;j++)
    {
        t1++;
    }

    t1 += calc(j, k-1);

    int t2 = calc(i+1, k);

    dp[i][k] = max(t1, t2);
    return dp[i][k];

}
int main()
{
    int t;
    scanf("%d",&t);
    int cas = 1;
    while(t--)
    {
        scanf("%d%d%d",&n,&w,&k);
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<n; i++)
        {
            int x;
            scanf("%d%d",&x,&y[i]);
        }
        idx = -1;
        sort(y,y+n);

        printf("Case %d: %d\n",cas++,calc(0,k));
    }
}
