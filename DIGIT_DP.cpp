#include <bits/stdc++.h>
using namespace std;
int len;
int dp[20][3];
string str1,str2;
int val;
int DIGIT_DP(int pos,int flag,int cur)
{
    cout<<pos<<" "<<flag<<" "<<cur<<endl;
    if(pos==len)return cur;
    if(dp[pos][flag]!=-1)return dp[pos][flag];
    int go;
    if(flag==1)
        go = 9;
    if(flag==0)
        go = (int)str2[pos]-'0';
    int res = 0;
  //  cout<<go<<endl;
    for(int i=(int)str1[pos]-'0'; i<=go; i++)
    {
        //cout<<i<<" "<<endl;
        if(i==val){
            if(i<=(int)str2[pos]-'0')
                res+=  DIGIT_DP(pos+1,1,9);
        }
        else{
        if(i<(int)str2[pos]-'0')
            res +=  DIGIT_DP(pos+1,1,0);
        if(i==(int)str2[pos]-'0')
            res +=  DIGIT_DP(pos+1,0,0);
            }
    }
    cout<<res<<endl;
    return dp[pos][flag] = res;
}

int main()
{
    string str;
    while(cin>>str>>str2)
    {
        int l1 = str.length();
        len = str2.length();
        string add = "";
        if(l1<len)
        {
            for(int i=1; i<=(len-l1); i++)
                add+="0";
        }
        str1 = add+str;
        cout<<str1<<endl;
        while(cin>>val)
        {
            memset(dp,-1,sizeof(dp));
            cout<<DIGIT_DP(0,0,0)<<endl;
        }
    }
}
