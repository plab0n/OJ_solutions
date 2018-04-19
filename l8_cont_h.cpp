#include <iostream>
#include <cstdio>
using namespace std;
int dp[100000];
int result(int i)
{
    if(i==1)
        return 2;
    else if(dp[i]!=0)
            return dp[i];
     else
     {
        dp[i] = result(i-1) * 2;
        return dp[i];
     }
}
int main ()
{
    int n;
    int sum = 1;
    while(scanf("%d", &n)!=EOF)
    {
       int store = result(n);
       printf("%d\n", store%10);
    }
}
