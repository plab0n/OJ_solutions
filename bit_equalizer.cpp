#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.in","r",stdin);

    int t;
    //cin>>t;
    int cas = 1;
    while(cin>>t){
    while(t--)
    {
        int swaped[105];
        memset(swaped,0,sizeof(swaped));
        string str,str2;
        cin>>str>>str2;
        int len = str.length();
        int cnt=0,loc=1;
        for(int i=0; i<len; i++)
        {
            if(str[i]=='?')
                ++cnt;
            if(!swaped[i]){
            for(int j=i+1; j<len; j++)
            {
                if(str[i]!=str[j] && str2[i]==str[j] && str2[j]==str[i] && !swaped[j]){
                    swap(str[i],str[j]);
                    swaped[i] = 1;
                    swaped[j] = 1;
                    ++cnt;
                    break;
                }
            }
            }
        }
        for(int i=0; i<len; i++)
        {
            if(str[i]=='1' && str2[i]=='0')
            {
                loc = 0;
                break;
            }
            if(str[i]=='0' && str2[i]=='1')
                ++cnt;
        }
        cout<<"Case "<<cas++<<": ";
        if(loc)
        cout<<cnt<<endl;
        else
            cout<<"-1"<<endl;
    }
    }
    return 0;
}
