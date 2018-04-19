#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    map<string,int>mp;
    int t,i;
    cin>>t;

    while(t--)
    {
        int cnt=0;
        string str;
        for(i=1; i<=4; i++)
        {
            cin>>str;
            mp[str] = 1;
        }
        for(i=1; i<=4; i++)
        {
            cin>>str;
            if(mp[str] == 1)
            {
                cnt++;
            }
        }
        if(cnt>=2)
            cout<<"similar"<<endl;
            else
                cout<<"dissimilar"<<endl;
                mp.clear();

    }
}
