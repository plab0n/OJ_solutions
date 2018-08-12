#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x;
    string str;
    while(cin>>a>>b>>x)
    {
        if(b>=a){
        str += "1";
        --b;
        }
        else{
            str+= "0";
            --a;
            }
        int i = 1;
        //cout<<"dfkdf"<<endl;
        while(x>1)
        {
            if(str[i-1]=='1'){
                str += "0";
                --a;
                }
            else{
                str += "1";
                --b;
                }
            --x;
            ++i;
           // cout<<str<<endl;
        }
        if(str[i-1]=='1')
        {
            while(b>0)
            {
                str += "1";
                --b;
                ++i;
                //cout<<str<<endl;
            }
            while(a>0)
            {
                str += "0";
                ++i;
                --a;
               // cout<<str<<endl;
            }
        }
        else{
            while(a>0)
            {
                str += "0";
                ++i;
                --a;
               // cout<<str<<endl;
            }
            while(b>0)
            {
                str += "1";
                --b;
                ++i;
                //cout<<str<<endl;
            }

        }
       // cout<<str.length()<<endl;
        cout<<str<<endl;
    }
}
