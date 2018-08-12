#include <bits/stdc++.h>
using namespace std;
int dp[200009];
int bin_srch(int s,int e,int val)
{
    int id = s;
    int id2 = e;
    while(s<=e)
    {
        int mid = (s+e)/2;
        cout<<dp[mid]-dp[id]<<endl;
        if(dp[mid]-dp[id]==val)
        {
            return mid;
        }
        else if(dp[mid]-dp[id]>val)
        {
            e = mid;
        }
        else{
            s = mid;
        }
    }
    return -1;
}
int main()
{
    string str;
    vector<int>zero;
    while(cin>>str)
    {
        int n = str.length();
        dp[0] = 0;
        int res = 0;
        for(int i=0; i<n; i++)
        {
            if(((int)str[i]-48)%3==0)
            {
                dp[i+1] = 0;
                zero.push_back(i+1);
            }
            else{
                dp[i+1] = dp[i]+(((int)str[i]-48)%3);
            }
        }
        zero.push_back(n);

        for(int i=0; i<n; i++)
        {
            if(dp[i+1]==0)
            {
                res++;
            }
            else{
                int id = upper_bound(zero.begin(),zero.end(),i)-zero.begin();
                //cout<<id<<endl;
                for(int j=3; j<=dp[id-1]; j+=3)
                {
                    //cout<<id<<endl;
                    int val = bin_srch(i+1,id,j);
                    if(val!=-1)
                    {
                        ++res;
                        i = val-1;
                    }
                }
            }
        }
        cout<<res<<endl;
        zero.clear();
    }
}
