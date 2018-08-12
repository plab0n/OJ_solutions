#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char ch = 'z';
    map<char,char>mp;
    for(char i='a' ; i<='z'; i++)
    {
        mp[i] = (char)ch;
        --ch;
    }
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0; i<n-1; i+=2)
        {
            swap(str[i],str[i+1]);
        }
        //cout<<str<<endl;
        for(int i=0; i<n; i++)
        {
            //cout<<mp[str[i]]<<endl;
            str[i] = mp[str[i]];
        }
        cout<<str<<endl;
    }
}
