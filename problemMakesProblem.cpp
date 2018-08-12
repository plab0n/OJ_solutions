#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long modInv(long long a,long long b){
	if(b==0)return 1LL;
	if(b==1)return a*1LL;
	long long x = modInv(a,b/2)%mod;
	 x = (x*x)%mod;
	if(b%2)
		x = (x*a)%mod;
	return (x+mod)%mod;
}

int main(int argc, char const *argv[])
{
	/* code */
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long fact[2000009];
	fact[0] = 1;
	for(int i=1; i<=2000000; i++)
		fact[i] = (i*fact[i-1])%mod;
	int t,cas=1;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		long long res = (fact[n+(k-1)]*(modInv((fact[n]*fact[k-1])%mod,mod-2)%mod))%mod;
		cout<<"Case "<<cas++<<": "<<res<<endl;

	}
	return 0;
}