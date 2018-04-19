#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;

    while(cin>>n>>k)
    {
        long long div = 1;
        for(int i=1; i<=k; i++)
            div*=10;
        long long ans = n;
        long long m = 2;
        while(ans%div!=0)
        {
            ans = n*m;
            ++m;
        }
        cout<<ans<<endl;
    }
}
