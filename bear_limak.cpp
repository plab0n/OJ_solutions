#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[1009];
    int t,n;
    cin>>t;
    int num[180];
    int cas=1;
    for(int j=1; j<=t; j++)
    {
        cin>>n;
        char ch;
        int loc = 0;
        memset(num,0,sizeof(num));
        getchar();
        gets(str);
        for(int i=0; i<n; i++)
        {
            num[(int)str[i]]++;
        }
        cout<<"Case "<<cas++<<":"<<endl;;
        for(int i=97; i<=122; i++)
        {
            if(num[i]>0)
            {
                cout<<(char)i<<" - "<<num[i]<<endl;
                loc = 1;
            }
        }
        if(!loc)
            cout<<-1<<endl;
            if(j<t)
            cout<<endl;
    }
}
