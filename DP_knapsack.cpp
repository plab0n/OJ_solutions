#include <iostream>
#include <cstdio>
#include <cstring>
#define MAX_N 10000
#define MAX_W 10000

int dp[MAX_N][MAX_W];
int n,CAP;
int cost[MAX_N];
int weight[MAX_W];
int MAX(int a,int b)
{
     //printf("%d%d", a,b);
    if(a>b)
        return a;
        else
            return b;
}
int func(int i,int w)
{
    int profit1=0,profit2=0;
    if(i==n)
        return 0;
    else if(dp[i][w]!=-1)
            return dp[i][w];
     if(w+weight[i]<=CAP)
     {
        profit1 = cost[i]+func(i+1,w+weight[i]);
     }
     profit2 = func(i+1,w);
     dp[i][w] = MAX(profit1,profit2);

     return dp[i][w];
}
int main ()
{
    int j;
    scanf("%d%d", &n,&CAP);
    memset(dp,-1,sizeof(dp));
    for(j=0; j<n; j++)
    {
        scanf("%d%d", &cost[j], &weight[j]);
    }

    printf("%d\n", func(0,0));
}
