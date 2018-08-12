#include <bits/stdc++.h>
using namespace std;

void Fast_IO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}
void FiLe()
{
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
}
string str;
long long dp[5009];
int len;

int main(int argc, char const *argv[])
{
	//FiLe();
	Fast_IO();
	while(cin>>str)
	{
		if(str.compare("0")==0)return 0;
		len = str.length();
		int loc = 0;
		dp[0] = dp[1] = 1;
		for(int i=2; i<=len; i++)
		{
			dp[i] = 0;

			char c1 = str[i-2],c2=str[i-1];

			if((c1=='1') || (c1=='2' && c2<='6'))dp[i] += dp[i-2];
			if(c2!='0')
				dp[i] += dp[i-1];
		}
		cout<<dp[len]<<endl;
	}
	return 0;
}
