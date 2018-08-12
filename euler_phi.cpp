#include <bits/stdc++.h>
using namespace std;

long long phi[1000009];
int mark[1000009];
void sievePhi(int n)
{
    int i,j;
    for(int i=1; i<=n; i++)phi[i] = i;

    for(int i=2; i<=n; i++)
    {
        if(!mark[i])
        {
            for(int j=i; j<=n; j+=i)
            {
                mark[j] = 1;
                phi[j] =1LL*( phi[j]/i * (i-1));
            }
        }
    }
}
int main()
{
    sievePhi(1000000);
    int t;
    cin>>t;
    while(t--)
    {
        long long m;
        cin>>m;
        cout<<phi[m]*(m-1)<<endl;
    }
}
