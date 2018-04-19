#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>mp[100009];
    int n,m,i,j;
    cin>>n>>m;
    string str[10009];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>str[i][j];
            mp[i][str[i][j]] = 1;
        }
    }
}
