#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    string str[105];
    while(cin>>n>>m)
    {
        for(int i=1; i<=n; i++)
            cin>>str[i];
        int loc = 1;
        char prev = str[1][0];
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<str[i].length()-1; j++)
            {
                if(str[i][j]!=str[i][j+1])
                {
                    loc = 0;
                    break;
                }
            }
            if(!loc || (i>1 && str[i][0]==prev)){
                loc = 0;
                break;
            }
            prev = str[i][0];
        }
        if(!loc)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
