#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a,c,r;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>a;
            if(a==1)
            {
                r = i;
                c = j;
            }
        }
    }
    c = abs(c-3);
    r = abs(r-3);
    //cout<<r<<" "<<c<<endl;
    cout<<r+c<<endl;
}
