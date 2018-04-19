#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int a=1,b=2,w,loc=1,spec=3;
        for(int i=1; i<=n; i++)
        {
            cin>>w;
            if(w==a)
            {
                a = w;
                swap(b,spec);
            }
            else if(w==b)
            {
                b = w;
                swap(a,spec);
            }
            else
            {
                loc = 0;
            }
             //cout<<a<<" "<<b<<endl;
        }
        if(loc)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
