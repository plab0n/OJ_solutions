#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long po(long long a,long long b)
{
    if(b==0)return 1LL;
    if(b==1)return a*1LL;
    long long x = po(a,b/2)%mod;
    x = (x*x)%mod;
    if(b%2)
        x = (x*a)%mod;
    x = (x+mod)%mod;
    return x%mod;
}
int main()
{
    int t;
    long long fact[100009];
    fact[0] = 1;
    for(int i=1; i<=100000; i++)
    {
        fact[i] = (fact[i-1]*i)%mod;
        fact[i] += mod;
        fact[i] %=mod;
    }
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long res = (po(2,n))%mod;
        long long val=1;
        long long sum = 0;
        for(long long i=1; i<=k; i++)
        {
            val = ((val%mod)*(n%mod))%mod;
           // cout<<po(fact[i],mod-2)<<endl;
            sum = ((sum%mod) + ((val*(po(fact[i],mod-2)%mod))%mod))%mod;
           // sum+=mod;
            sum%=mod;
            --n;
        }
        //cout<<sum<<endl;
        res-=sum;
        res+=mod;
        cout<<res%mod<<endl;
    }
}
