#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b;
    string str;

    while(cin>>n>>a>>b)
    {
        cin>>str;
        int len = str.length();
        len-=1;
        long long one=0,zero=0;
        for(int i=0; i<=len; i++)
        {
            int prev = i;
            int loc = 0;
            if(str[i]=='1'){
                while(str[i]=='1' && i<=len)
                {
                    loc = 1;
                    ++i;
                }
                if(prev!=0)
                ++one;
                if(loc)
                --i;
            }
            else if(str[i]!='1'){
                while(str[i]=='0' && i<=len){
                    ++i;
                    loc = 1;
                    }
                ++zero;
                if(loc)
                --i;
            }
        }
        int loc =0;
        while(str[len]=='1' && len>0){
            loc = 1;
            --len;
            }
            if(loc)--one;
        long long res = min(one*a+b,b*zero);
        if(res<0)cout<<0<<endl;
        else
        cout<<res<<endl;
    }
}
