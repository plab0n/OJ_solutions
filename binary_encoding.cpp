#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int n;

    while(cin>>n)
    {
        int cnt =0,loc=0,cnt2=0;
        cin>>str;
        str[n] = '0';
        for(int i=0; i<n; i++)
        {
            if(str[i]=='1')
            {
                ++cnt;
                loc = 0;
            }
            if(str[i]=='0')
            {
                 if(!loc){
                    cout<<cnt;
                    cnt =0;
                    loc = 1;
                 }
                if(str[i+1]=='0')
                    cout<<str[i];

            }
        }
        if(cnt>0)
            cout<<cnt;
        cout<<endl;
    }
}
