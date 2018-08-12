#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    long long dp[100009][29];
    while(t--)
    {
        string str;
        cin>>str;
        int len = str.length();
        for(int i=0; i<=26; i++)
        {
            dp[0][i] = 0;
        }
        for(int i=0; i<len; i++)
        {
            for(int j=1; j<=26; j++)
            {
                if(((int)str[i]-96)==j)
                    dp[i+1][j] = dp[i][j]+1;
                else
                    dp[i+1][j] = dp[i][j];
            }
        }

        long long tot = 0;
        for(int i=0; i<len; i++)
        {
            for(int j=(int)str[i]-95; j<=26; j++)
            {
                tot+= (1LL*(dp[len][j]-dp[i][j]));
            }
        }
        long long val = tot;
        for(int i=0; i<len; i++)
        {
            long long ths = 0;
            for(int j=1; j<(int)str[i]-96; j++)
            {
                ths+= (dp[i+1][j]-dp[0][j]);
            }
            for(int j=(int)str[i]-95; j<=26;  j++)
            {
                ths += (dp[len][j]-dp[i][j]);
            }

            int id = (int)str[i]-96;
            for(int j=1; j<=26; j++)
            {

                if(j==id)continue;
                long long sum = 0;
                for(int k=1; k<j; k++){
                sum += (dp[i+1][k]-dp[0][k]);
                }
                for(int k=j+1; k<=26; k++)
                {
                    sum += (dp[len][k]-dp[i][k]);
                }
                val = min(val,tot-ths+((sum-1+abs(id-j)*1LL)));
            }

        }

        cout<<val<<endl;
    }
}
