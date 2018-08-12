#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long sum = n*(n+1)/2;
        long long di = sum/n;
        if(sum>(n*di))cout<<n-1<<endl;
        else
            cout<<n<<endl;
    }
}
