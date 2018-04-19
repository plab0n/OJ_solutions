#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    int t;
    cin>>t;
    int res[20];
    while(t--)
    {
        cin>>a>>b;
        int i=0;
        while(a>0 || b>0)
        {
            if(a==0 && b>0)
                res[i] = b%10;
            else if(b==0 && a>0)
                res[i] = a%10;
            else
                res[i] = ((a%10)+(b%10))%10;
                a/=10;
                b/=10;
                ++i;
        }
        for(int j=i-1; j>=0; j--)
            cout<<res[j];
        cout<<endl;
    }
}
