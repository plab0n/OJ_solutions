#include <bits/stdc++.h>
using namespace std;

void Fast_IO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}
void FiLe()
{
	freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
}

int main()
{
    Fast_IO();
    FiLe();

    string str;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,str);
        string st = str;

        int len = st.length();
        int g = 0,b = 0;
        for(int i=0; i<len; i++)
        {
            if(st[i]=='g' || st[i]=='G')++g;
            if(st[i]=='b' || st[i]=='B')++b;
        }
        if(g>b)cout<<st<<" is GOOD"<<endl;
        else if(g<b)cout<<st<<" is A BADDY"<<endl;
        else
            cout<<st<<" is NEUTRAL"<<endl;
    }
}
