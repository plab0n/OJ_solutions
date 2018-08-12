#include <bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
long long fact[1005];
const int mod = 1e9+7;
long long nCk(int n,int k)
{
	if(n==k || k==0)return 1LL;
	if(k==1)return n*1LL;
	if(dp[n][k]!=-1)return dp[n][k];
	return dp[n][k] = ((nCk(n-1,k)%mod) + (nCk(n-1,k-1)%mod))%mod;
}

long long dea(int n,int k)
{
	long long ans = fact[n];
	//cout<<ans<<endl;
	for(int i=1; i<=k; i++)
	{
		//long long val = nCk(k,i);
		//cout<<i<<" "<<k<<" "<<val<<endl;
		if(i%2)
			ans -= (nCk(k,i) * fact[n-i])%mod;
		else 
			ans += (nCk(k,i) * fact[n-i])%mod;
		ans = (ans+mod)%mod;
	}
	return (ans);
}
int main(int argc, char const *argv[])
{
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	fact[0] = 1;
	for(int i=1; i<=1000; i++)
	{
		fact[i] = (i*fact[i-1])%mod ;
	}
	memset(dp,-1,sizeof(dp));
	//nCk(1000,1000);
	int t;
	cin>>t;
	int cas = 1;
	while(t--)
	{
		int n,k,m;
		cin>>n>>m>>k;
		long long res = ((nCk(m,k)%mod) * (dea(n-k,m-k)%mod)) %mod;
		cout<<"Case "<<cas++<<": "<<res<<endl;
	}
	return 0;
}
