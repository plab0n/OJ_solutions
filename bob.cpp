#include <bits/stdc++.h>
using namespace std;
string str[5];
int loc;
void isIt(int i,string st)
{
    if(i==3)
    {
       // cout<<st<<endl;
        if(st.compare("bob")==0 || st.compare("bbo")==0 || st.compare("obb")==0)
        {
            loc = 1;
            return ;
        }
    }
    if(str[1][i]=='o'){
        isIt(i+1,st+"o");
        }
    if(str[1][i]=='b')
    {
        isIt(i+1,st+"b");
    }
    if(str[2][i]=='o')
    {
        isIt(i+1,st+"o");
    }
    if(str[2][i]=='b')
    {
        isIt(i+1,st+"b");
    }

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>str[1];
        cin>>str[2];
        loc =0;
        isIt(0,"");
        if(loc)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
