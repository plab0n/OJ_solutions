#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;

    while(cin>>h>>m)
    {
        if(h==0 || h==6)
        {
            if(m==0 || m==6)
                cout<<h<<" "<<m<<endl;
            else{
                cout<<h<<" "<<60-m<<endl;
            }
        }
        else if(m==0 || m==6)
        {
            if(h==0 || h==6)cout<<h<<" "<<m<<endl;
            else{
                cout<<12-h<<" "<<m<<endl;
            }
        }
        else{
            cout<<12-h<<" "<<60-m<<endl;
        }

    }
}
