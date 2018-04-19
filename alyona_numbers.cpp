#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n,m,i,sum=0;
    cin>>n>>m;

    for(i=1; i<=n; i++)
    {
        sum+=(m+(i%5))/5;
    }
    cout<<sum<<endl;
}
