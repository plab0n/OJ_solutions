#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,g,b;

    while(cin>>r>>g>>b)
    {
        int buck =0,rem=0,loc=0;
        buck+=(r/3);
        if(r%3>0)
        {
            rem+=(r%3);
            loc = 1;
        }
        buck+=(g/3);
        if(g%3>0 && loc)
        {
            rem+=(g%3);
            loc = 1;
        }
        else
            loc = 0;
        buck+=(b/3);
        if(b%3>0 && loc)
        {
            rem+=(b%3);
            loc = 1;
        }
        else
            loc = 0;
        if(loc)
        {
            buck+=(rem/3);
        }
        cout<<buck<<endl;
    }
}
