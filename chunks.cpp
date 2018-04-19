#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int loc=0;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
            {
                int v = (i*3)+(j*7);
                if(v==n)
                {
                    loc = 1;
                    break;
                }
            }
        }
        if(loc)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
