#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        long long dif = abs(a-b);
        if(dif>=(n/2))
        {
            if(a<b)
                cout<<a*(n*n)<<endl;
            else
                cout<<b*(n*n)<<endl;
        }
        else{
            long long ord = n/2;
            ord+= dif;
            if(a<b)
            {
                cout<<a*(ord*ord) + (n-ord)*(n-ord)*b<<endl;
            }
            else{
                cout<<b*(ord*ord) + (n-ord)*(n-ord)*a<<endl;
            }
        }
    }
}
