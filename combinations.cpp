#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    long long fact[105];
    fact[0] = 1;
    for(long long i = 1; i<=100; i++)
        fact[i] = fact[i-1]*i;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)return 0;
        long long mul = 1;
        for(long long i=(n-m+1); i<=n; i++)
            mul *=  i;

        cout<<n<<" things taken "<<m<<" at a time is "<<mul/fact[m]<<" exactly."<<endl;

    }
}
