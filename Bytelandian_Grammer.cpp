#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int t;
    cin>>t>>str;

    while(t--)
    {
        string lang;
        cin>>lang;
        int len = lang.length();
        for(int i=0; i<len; i++)
        {
            if(lang[i]>='a'&&lang[i]<='z')
            {
                    cout<<str[(int)lang[i]-97];
            }
            else if(lang[i]>='A'&&lang[i]<='Z')
                {
                    cout<<(char)(str[(int)lang[i]-65]-32);
                }
            else{
                if(lang[i]=='_')
                cout<<" ";
                else
                    cout<<lang[i];
            }
        }
        cout<<endl;
    }
}
