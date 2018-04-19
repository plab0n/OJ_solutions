#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    map<string,string>mp;
    int n,m;
    while(cin>>n>>m)
    {
        for(int i=1; i<=n; i++)
        {
            cin>>str1>>str2;
            mp[str2] = str1;
        }
        for(int i=1; i<=m; i++)
        {
            string one,two;
            cin>>one>>two;
            string val="";
            for(int j=0; j<two.length()-1; j++)
            {
                val+=two[j];
            }

            cout<<one<<" "<<two<<" #"<<mp[val]<<endl;
        }
        mp.clear();
    }
}
